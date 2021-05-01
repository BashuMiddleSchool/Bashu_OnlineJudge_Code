#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[101],i,n,d,x,s=0,m=-1000000,u=1000000;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[n+1]=a[1];
	a[n+2]=a[2];
	a[n+3]=a[3];
	for(i=1;i<=n;i++)
	{
		s=a[i]+a[i+1]+a[i+2]+a[i+3];
		if(m<s){
m=s;d=i;
}
		if(u>s){
u=s;x=i;
}
	}
	cout<<d<<" "<<x<<endl;
}