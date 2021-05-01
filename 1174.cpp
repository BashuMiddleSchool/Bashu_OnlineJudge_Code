#include<iostream>
using namespace std;
int main()
{
	int n,n1,a=0,a1=0,k,k1;
	cin>>n>>n1;
	for(int i=0;i<=n1;i++)
	{
		k1=i;
		while(k1!=0)
		{
			if(k1%10==2) a1=a1+1;
			k1=k1/10;
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		k=i;
		while(k!=0)
		{
			if(k%10==2) a=a+1;
			k=k/10;
		}
	}
	cout<<a1-a<<endl;
	return 0;
}