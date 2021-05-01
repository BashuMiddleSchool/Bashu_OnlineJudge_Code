#include<iostream>
using namespace std;
int main() {
	int x,y,b[105][105]= {0},a[105][105]={0},i,j,n,m;
	cin>>n>>m;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++) {
			cin>>a[i][j];
			}
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			b[j][n-1-i]=a[i][j];
			}
		}
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++)
			cout<<b[i][j]<<' ';
		cout<<endl;
		}
	}