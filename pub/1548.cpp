//lijunhao
#include<bits/stdc++.h>
using namespace std;
int n,prt[510]= {0};
void dfs(int gen)
{
	printf("%d ",gen);
	for(int i=1; i<=n; i++) {
		if(prt[i]==gen) {
			dfs(i);
		}
	}
}
int main()
{
	int g,x,y,l;
	cin >> n;
	for(int i=1; i<n; i++) {
		cin >> x >> y,prt[x]=y;
	}
	for(int i=1;i<=n;i++) if(prt[i]==0) {
		g=i;
		break;
	}
	dfs(g);
	return 0;
}
