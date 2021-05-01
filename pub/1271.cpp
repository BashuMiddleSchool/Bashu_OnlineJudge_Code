#include<bits/stdc++.h>
#define var int
using namespace std;
var a[1010][1020]={0};
var f[1005][1006]={0};
int main()
{
	var n,k;
	cin>>n;
	for(var i=1; i<=n; i++)
		for(var j=1; j<=n; j++)
			cin >> a[i][j];
	f[1][1]=a[1][1];
	for(var i=2; i<=n; i++) {
		f[1][i]=a[1][i]+f[1][i-1];
		f[i][1]=a[i][1]+f[i-1][1];
	}
	for(var i=2; i<=n; i++)
		for(var j=2; j<=n; j++)
			f[i][j]=
			    min(f[i-1][j],f[i][j-1])+a[i][j];
	cout<<f[n][n];
	return 0;
}
