#include<iostream>
using namespace std;
int main()
{
	int a[100001]={0};
	int n,i,b=-1000000,m;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>=b) {
		       b=a[i];m=i;
		}
	}
	cout<<b<<endl;
	cout<<m;
	return 0;
}