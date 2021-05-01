#include<bits/stdc++.h>
#define MAXN 110
using namespace std;
int f[MAXN];
int ch[MAXN];
int n,m,x,y,r,maxr=0,maxn=-1;
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		f[i]=i;
	for(int i=1; i<=m; i++) cin >> x >> y,f[y]=x,ch[x]++;
	for(int i=1; i<=n; i++) {
		if(f[i]==i) r=i;
		if(maxn<ch[i]) maxr=i;
		maxn=max(maxn,ch[i]);
	}
	cout << r << "\n" << maxr << "\n";
	for(int i=1; i<=n; i++)
		if(f[i]==maxr&&i!=maxr) printf("%d ",i);
	return 0;
}