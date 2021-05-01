#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main () {
	double a,b;
	char l;
	cin >> a >> b >> l ;
	if(l=='+') cout << fixed << setprecision(1) << a+b*1.0;
	else if(l=='-') cout << fixed << setprecision(1)<< a-b*1.0;
		else if(l=='*') cout << fixed << setprecision(1)<< a*b*1.0;
			else if(l=='/'&&b!=0) cout << fixed << setprecision(1)<< a/b*1.0;
				else cout << "error" ;
				return 0;
}