#include<bits/stdc++.h>
using namespace std;
int main() {
	double n,a[201],b[201],s=0;
	int i,m;
	cin>>n>>m;
	for(i=1; i<=m; i++) {
		cin>>a[i];
		cin>>b[i];
	}
	for(i=1; i<=m; i++) {
		s=s+b[i];
		if(a[i]>=n)break;
	}
	cout<<fixed<<setprecision(1)<<s<<endl;
	return 0;
}

