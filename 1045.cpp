#include<iostream>
using namespace std;
int main()
{
	int i,x,y,z;
	for( i=1000;i<=9999;i++)
	{
	x=i/100;
	y=i%100;
	z=(x+y)*(x+y);
	if(z==i)cout<<i<<' ';
	}
	return 0;
}