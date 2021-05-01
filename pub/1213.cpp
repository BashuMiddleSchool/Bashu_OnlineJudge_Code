#include<bits/stdc++.h>
using namespace std;
int v,n,i,j,a[31],f[20005];
int main() {
	cin>>v>>n; //容量
	for(i=1; i<=n; i++)
		cin >> a[i];
	f[0]=1; //
	for(i=1; i<=n; i++) //i个
		for(j=v; j>=a[i]; j--)
			f[j]=f[j]||f[j-a[i]];
	for(i=v; i>=0; i--)
		if(f[i]==1) {
			cout<<v-i;
			break;
		}
	return 0;
}