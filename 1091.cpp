#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n,i,a[1000005];
long long s,ans,t;
int main()
{	
	cin>>n;
	ans=0;t=0;
	for(i=1;i<=n;i++)
	{cin>>a[i];
	if(a[i]>0)t++;
	ans=ans+a[i];
}
	s=a[1];
	for(i=2;i<=n;i++)
	s=s+abs(a[i]-a[i-1]);
	s=s+a[n]+2*ans+2*t;
	cout<<fixed<<setprecision(4)<<s*0.0025<<"\n";
}
