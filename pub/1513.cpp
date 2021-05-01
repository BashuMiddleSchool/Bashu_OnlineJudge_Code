#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,t,f[1005],fi[1005],ti[1005];
int main() {
	cin>>n>>t;
	for(i=1; i<=n; i++)
		cin>>fi[i]>>ti[i];
	for(i=1; i<=n; i++)
		for(j=t; j>=ti[i]; j--)
			f[j]=max(f[j],f[j-ti[i]]+fi[i]);
	cout<<f[t];
	return 0;
}