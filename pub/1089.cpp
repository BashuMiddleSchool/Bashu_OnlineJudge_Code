#include<iostream>
using namespace std;
int b[10004];
int main()
{
	int n,j,x,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>x;
	b[x]++;
	}
	for(i=10000;i>=0;i--)
	if (b[i]!=0){cout<<b[i]<<" ";break;}
	for(j=i-1;j>=0;j--)
	if(b[j]!=0){cout<<b[j]<<" ";break;}
	int s=0;
	for(i=10000;i>=0;i--)
	if(b[i])s++;
	cout<<s<<"\n";
}