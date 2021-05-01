#include <bits/stdc++.h>
using namespace std;
int ans;
char p;
int m,n;
char mapp[100][100];
int f[100];
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,1,-1};
void dfs(int x,int y,int s) {
	if(x<1||y<1||x>m||y>n) return;
	if(f[mapp[x][y]]) return;
	ans=max(ans,s);
	for(int i=0; i<4; ++i) {
		int newx=x+dx[i];
		int newy=y+dy[i];
		f[mapp[x][y]]=1;
		dfs(newx,newy,s+1);
		f[mapp[x][y]]=0;
	}
}


int main() {
	scanf("%d%d",&m,&n);
	scanf("%c",&f);
	for(int i=1; i<=m; ++i) {
		for(int j=1; j<=n; ++j) cin>>mapp[i][j];
	}
	dfs(1,1,1);
	printf("%d",ans);
}