#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double sum, x0,x1,a;
	int n=1;
	cout << "write a  ";
	cin >> a;
	x1 = 1+pow(-1,n-1)/pow(pow(n,2)+1,a);
	sum = 1;
	while (x1 > 0.0001) {
		sum*=x1;
		n++;
		x0=x1;
		x1 = 1+pow(-1,n-1)/pow(pow(n,2)+1,a);
			if (x1 >x0) {
		cout <<"series diverges";
		break;
	}
		}
	if (x1/x0 <1)
		cout << sum;
	return 0;
}