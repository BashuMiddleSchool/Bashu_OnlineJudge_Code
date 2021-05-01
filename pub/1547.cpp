#include<bits/stdc++.h>
#define MAXN 110
using namespace std;
int n,k,x,y,cnt,ans[MAXN],f[MAXN];
int main() {
	cin>>n>>k;
	for(int i=1; i<=k; i++)
		cin >> x >> y,f[y]++;
	for(int i=1; i<=n; i++) if(!f[i]) ans[++cnt]=i;
	printf("%d\n",cnt);
	for(int i=1; i<=cnt; i++) printf("%d ",ans[i]);
	return 0;
}