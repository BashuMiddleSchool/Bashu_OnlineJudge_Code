#include<bits/stdc++.h>
using namespace std;
int main() {
	int f[100009]= {1},n,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++)
		for(int j=i-1; j>=i-k&&j>=0; j--) {
			f[i]=(f[j]+f[i])%100003;
		}
	cout<<f[n];
	return 0;
}