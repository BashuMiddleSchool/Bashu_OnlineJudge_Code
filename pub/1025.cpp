#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() { 
	int a,b,c,i;
	cin >> a >> b >> c;
	if(a>b) {i=a;a=b;b=i;}
	if(a>c) {i=a;a=c;c=i;}
	if(b>c) {i=b;b=c;c=i;}
	cout << c << " " << b << " " << a <<endl;
	return 0;
}

