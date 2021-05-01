#include<bits/stdc++.h>
using namespace std;
int a[201][201];
char ch;
int main() {
	int n,m,s=0,k;
	int i,j;
	cin>>m>>n;
	for(i=1; i<=m; i++)
		for(j=1; j<=n; j++) {
			cin>>ch;
			if(ch=='.') a[i][j]=0;
			if(ch=='#') a[i][j]=-1;
		}
	a[1][1]=1;
	for(k=1; k<=10000; k++)
		for(i=1; i<=m; i++)
			for(j=1; j<=n; j++) {
				if(a[i][j]==k&&a[i-1][j]==0) {
					a[i-1][j]=k+1;
				}
				if(a[i][j]==k&&a[i+1][j]==0) {
					a[i+1][j]=k+1;
				}
				if(a[i][j]==k&&a[i][j-1]==0) {
					a[i][j-1]=k+1;
				}
				if(a[i][j]==k&&a[i][j+1]==0) {
					a[i][j+1]=k+1;
				}
			}
	cout<<a[m][n];
}