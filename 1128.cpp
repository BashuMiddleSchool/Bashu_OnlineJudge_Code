#include<iostream>
using namespace std;
int n,m,dx[]= {1,-1,0,0},dy[]= {0,0,1,-1},Alpha,Beta,Max,Gamma,sum;
char map[100][100];
int v[100][100]= {0};
void lnit() {
	int i,j;
	cin>>n>>m;
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++)
			cin>>map[i][j];
}
void dfs(int x,int y) {
	int i,ty,tx;
	sum++;
	if(x>Max)Max=x;
	if(y>Gamma)Gamma=y;
	if(x<Beta)Beta=x;
	if(y<Alpha)Alpha=y;
	v[x][y]=1;
	for(i=0; i<=3; i++) {
		tx=x+dx[i];
		ty=y+dy[i];
		if(tx>=1&&x<=n&&ty>=1&&ty<=m&&map[tx][ty]=='#'&&!v[tx][ty])dfs(tx,ty);
	}
}
void solve() {
	int i,j,r=0,c=0;
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			if(!v[i][j]&&map[i][j]=='#') {
				Max=0;
				Gamma=0;
				Beta=n;
				Alpha=m;
				sum=0;
				dfs(i,j);
				if((Max-Beta+1)*(Gamma-Alpha+1)==sum)r++;
				else c++;
			}
		}
	}
	cout<<r<<"\n"<<c;
}
int main() {
	lnit();
	solve();
	return 0;
}
