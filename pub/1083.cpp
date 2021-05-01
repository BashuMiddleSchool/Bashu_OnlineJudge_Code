#include<iostream>
using namespace std;
int t[100001];
int main()
{
	int i,j,a,n;
	cin>>a>>n;
	cout<<"("<<a<<")10=(";
	for(i=0;a!=0;i++)
	{t[i]=a%n;
	a=a/n;
	}
	for(j=i-1;j>=0;j--)
	{if(t[j]>=10)cout<<char(t[j]+55);
	else cout<<t[j];
	}
	cout<<")"<<n;
	return 0;
}