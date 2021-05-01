#include<bits/stdc++.h>
using namespace std;
int f[210] = {0,0,0},w[222],v[233];
int main() {
	int m,n;
	cin >> m >> n ;
	for(int i = 1; i<=m; i++)
		f[i]=0; //init
	for(int i = 1; i<=n; i++)
		cin >> w[i] >> v[i]; 
	for(int i = 1; i<=n; i++) 
		for(int j = w[i]; j<=m; j++)
			f[j]=max(f[j],f[j-w[i]]+v[i]);
	cout<< "max=" << f[m] << "\n" ;
	return 0;
}
