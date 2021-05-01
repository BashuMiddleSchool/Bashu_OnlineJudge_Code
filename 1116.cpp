#include<iostream>
using namespace std;
int main()
{
int n,k,f[10001],x,l,r,mid,i;
cin>>n>>k;
for(i=1;i<=n;i++)cin>>f[i];
	for(i=1;i<=k;i++)
	{
	cin>>x;
	l=1;
	r=n;
	while(l<=r)
	{mid=(l+r)/2;
	if(x==f[mid]){cout<<mid<<endl;break;}
if(x>f[mid])r=mid-1;
else l=mid+1;}
	}
	return 0;
}
