#include<iostream>
using namespace std;
int main()
{
	int n,x,i,b;
	b=0;
	n<=10000;
	cin>>n;
	x=n/7;
	for(i=0;i<=x;i++)
	{
		b=b+i;
	}
	cout<<b*7;
	return 0;
}