
#include<iostream>
using namespace std;
int main()
{
	long long m=1,s=0,n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{   m=m*i;
	    s=s+m;
	}
	cout<<s<<endl;
	return 0;
}