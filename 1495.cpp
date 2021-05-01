#include<bits/stdc++.h>
using namespace std;
int a[105][105]={0};
long long f[105][105]={0};
long long g[105][105]={0};
int main()
{
	int n,m,x,y;
	char ch;
	cin>>n>>m;
	for(int i=1;i<=n;i=i+1)
	{
		for(int j=1;j<=m;j=j+1)
		{
			cin>>ch;
			a[i][j]=ch-'0';
		}
	}
	f[1][1]=a[1][1];
	if(f[1][1]>0)
	{
		g[1][1]=1;
	}
	for(int i=2;i<=n;i=i+1)
	{
		
		
		f[i][1]=max(f[i-1][1],f[i][0])+a[i][1];
		if(f[i][1]>0)
		{
			g[i][1]=1;
		}
	}
	for(int i=2;i<=m;i=i+1)
	{
		
		f[1][i]=max(f[0][i],f[1][i-1])+a[1][i];
		if(f[1][i]>0)
		{
			g[1][i]=1;
		}
	}
	for(int i=2;i<=n;i=i+1)
	{
		for(int j=2;j<=m;j=j+1)
		{
			f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
			if(f[i][j]==f[i-1][j]+a[i][j])
			{
				x=1;
			}else
			{
				x=0;
			}
			if(f[i][j]==f[i][j-1]+a[i][j])
			{
				y=1;
			}else
			{
				y=0;
			}
			g[i][j]=x*g[i-1][j]+y*g[i][j-1];
		}	
		
		
	}
	
	cout<<f[n][m]<<endl;
	cout<<g[n][m];
	return 0;
}