#include<bits/stdc++.h>
using namespace std;
int py[100]={0},a[100],b[100],c[100],i,m=0,n=0;
int main() 
{
	for(i=1;i<=7;i++) 
	{
		cin>>a[i]>>b[i];
	}
	for(i=1;i<=7;i++) 
	{
		c[i]=a[i]+b[i];
	}
	for(i=1;i<=7;i++) 
	{
		if(c[i]>8)
		{
			if(c[i]>n)
			{
				m=i;
				n=c[i];
			}
		}
	}
	cout<<m;
	return 0;
}