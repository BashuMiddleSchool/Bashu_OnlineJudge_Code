#include<bits/stdc++.h>
using namespace std;
int n,m,a[101][101],vst[101][101],xx1,yy1,x2,y2;
int dx[4]= {-1,0,1,0},dy[4]= {0,1,0,-1};
struct node {
	int x,y,d;
} q[100001];
int bfs(int x1,int y1) {
	int i,j,x,y,s,t;
	memset(q,0,sizeof(q));
	memset(vst,0,sizeof(vst));
	vst[x1][y1]=1;
	s=1;
	t=1;
	q[1].x=x1;
	q[1].y=y1;
	q[1].d=0;
	while(s<=t) {
		for(i=0; i<4; i++)for(j=1;; j++) {
				x=q[s].x+dx[i]*j;
				y=q[s].y+dy[i]*j;
				if(x==x2&&y==y2) {
					cout<<q[s].d+1<<endl;
					return 1;
				}
				if(x<0||y<0||x>n+1||y>m+1||a[x][y])break;
				if(!vst[x][y]) {
					t++;
					q[t].x=x;
					q[t].y=y;
					q[t].d=q[s].d+1;
					vst[x][y]=1;
				}
			}
		s++;
	}
	return 0;
}

void init() {
	memset(a,0,sizeof(a));
	char x;
	scanf("%d%d",&m,&n);
	x=getchar();
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m+1; j++) {
			x=getchar();
			if(x=='X')a[i][j]=1;
		}
}
int main() {
	init();
	while(1) {
		scanf("%d%d%d%d",&yy1,&xx1,&y2,&x2);
		if(xx1==0&&yy1==0&&x2==0&&y2==0)break;
		if(!bfs(xx1,yy1))
			printf("%d\n",0);
	}
}