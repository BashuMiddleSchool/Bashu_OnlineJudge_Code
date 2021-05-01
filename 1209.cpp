#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,m,cnm,mm,i,j;
	long long f[100][100];
	cin>>n>>m>>cnm>>mm;
	cnm++;
	mm++;
	n++;
	m++;
	memset(f,0,sizeof(f));
	f[0][1]=1;
	for (i=1; i<=n; i++)
		for (j=1; j<=m; j++)
			if ((abs(i-cnm)+abs(j-mm)==3)&&(i!=cnm)&&(j!=mm)||(i==cnm&&j==mm));
			else f[i][j]=f[i-1][j]+f[i][j-1];
	cout<<f[n][m];
	return 0;
	}