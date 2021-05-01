#include<bits/stdc++.h>
using namespace std;
int a[20][20],b[20][20];
int main() {
	int m,i,j;
	cin >>m;
	for(i=1; i<=m; i++) {
		for(j=1; j<=m; j++) cin >> a[i][j];
	}
	for(i=1; i<=m; i++) {
		for(j=1; j<=m; j++) {
			b[j][i]=a[i][j];
		}
	}
	for(i=1;i<=m;i++) {
		for(j=1;j<=m;j++) {
			cout << b[i][j] << " " ;
			
		}
		cout << "\n";
	}
	return 0;
}