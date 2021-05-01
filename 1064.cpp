#include<iostream>
using namespace std;
int a[105];
int main()
{
	int n,m,s,t=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s=i;
	}
	cin>>m;
	for(int i=s;i>=1;i--)
	{
		if(a[i]==m) t++;
	}
	cout<<t;
	return 0;
}