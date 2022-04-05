#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double sum, x0,x1;
	int n=3;
	x1 = (pow(n,2)+n-6)/(pow(n,2)+n-2);
	sum = 1;
	while (x1 > 0.0001) {
		sum*=x1;
		n++;
		x0=x1;
		x1 = (pow(n,2)+n-6)/(pow(n,2)+n-2);
			if (x1 >x0) {
		cout <<"series diverges";
		break;
	}
		}
	if (x1/x0 <1)
		cout << sum;
	return 0;
}