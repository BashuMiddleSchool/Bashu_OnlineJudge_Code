#include<iostream>
using namespace std;
int main() {
	int a[105][105],b,c[105][105],i,j,d,n,m,p,o;
	cin>>n>>m;
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++) {
			cin>>a[i][j];
			c[i][j]=a[i][j];
		}
	for(i=2; i<=n-1; i++)
		for(j=2; j<=m-1; j++) {
			p=(c[i][j-1]+c[i][j+1]+c[i+1][j]+c[i-1][j]+c[i][j])%5;
			if(p==0||p==1||p==2)
				a[i][j]=(c[i][j-1]+c[i][j+1]+c[i+1][j]+c[i-1][j]+c[i][j])/5;
			else a[i][j]=(c[i][j-1]+c[i][j+1]+c[i+1][j]+c[i-1][j]+c[i][j])/5+1;
		}
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
}

