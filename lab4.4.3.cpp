#include <iostream>
#include <cmath>
using namespace std;
int main() {
double f1,f2,x,r,z;
int n;
while(n <= 100) {
	f2 = (4-5*n)/(pow(5,n)*pow(n,2)+4);
	n++;
}
r = 1/f2;
cout <<"r=  "<<  r << endl;
x = r;
n = 0;
while (z>0.0000001){
	z = (4-5*n)*pow(x,n)/(pow(5,n)*(pow(n,2)+4));
	f1+=z;
}
cout.precision(6);
cout <<"sum=  "<< f1;
return 0;
}