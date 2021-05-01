#include<bits/stdc++.h>
using namespace std;
int ans,w[110],v[210],f[210][205];
int main() {
	int m,n;
	cin >> m >> n;
	for(int i=1; i<=n; i++) {
		cin >> w[i] >> v[i];
	}
	for(int i=1; i<=n; i++)
		f[0][i]=0; //初始化
	for(int i=1; i<=m; i++)
		f[i][0]=0; //初始化
	for(int i=1; i<=n; i++) 
		for(int j=1; j<=m; j++) { 
			f[i][j]=f[i-1][j]; //不装
			if(j>=w[i]&&f[i][j]<f[i-1][j-w[i]]+v[i]){
				f[i][j]= f[i-1][j-w[i]]+v[i]; //装
				ans=f[i][j];
		}
}
	cout << ans;
	     return 0;

}