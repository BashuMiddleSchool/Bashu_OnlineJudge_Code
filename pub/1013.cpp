#include <iostream>
#include <math.h>
#include<cmath>
#include<iomanip> 
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3;
	double n,p,a,b,c,x,y,z;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	x=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	y=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	z=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
	a=sqrt(x);
	b=sqrt(y);
	c=sqrt(z);
	p=(a+b+c)/2; 
	n=sqrt(p*(p-a)*(p-b)*(p-c));
	cout << fixed << setprecision(2) << n;
	return 0; 
}
