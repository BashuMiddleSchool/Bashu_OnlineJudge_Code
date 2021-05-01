#include<bits/stdc++.h>
using namespace std;
int f[2077][2077] = {0,0,0},w[2222],v[3333],t[4444];
int main() {
	int w0,v0,n;
	cin >> w0 >> v0 >> n;
	for(int i=1; i<=n; i++)
		cin >> t[i] >> w[i] >> v[i];
	for(int i=1; i<=n; i++)
		for(int j=w0; j>=w[i]; j--) //weight
			for(int k=v0; k>=v[i]; k--)
				f[j][k]=max(f[j][k] , f[j-w[i]][k-v[i]] + t[i]);
	cout<<f[w0][v0];
	return 0;
}
