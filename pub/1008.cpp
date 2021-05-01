#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a;
	b=a/1000;
	c=a/100%10;
	d=a/10%10;
	e=a%10;
	cout<<e<<d<<c<<b;
	return 0;
}