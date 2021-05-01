//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
#define foo(in) for(int i=1;i<=n;i++)
#define foo(jm) for(int j=1;j<=m;i++)
using namespace std;
//initialize
int k1[4]={1,-1,0,0},k2[4]={0,0,1,-1};
int n,m,k,d,i,j,l,r,xx,yy,x,y;
int g[110][110],h[5][1000005];
char ch;
bool v[110][110][110];


int main() {
	cin >> n >> m>>k;
	memset(g,0,sizeof(g));
	for(i=1;i<=n;++i) {
		for(j=1;j<=m;++j) {
			cin >> ch;
			if(ch=='P') {
				g[i][j]=1;
			}
			else g[i][j] = 2;
		}
	}
	if(!(g[1][1]==1 && g[n][m]==1)) {
		printf("impossible \n");
		return 0;
	}
	l=0,r=1;
	h[1][1]=1;h[2][1]=1;h[3][1]=0;h[4][1]=k;
	v[1][1][k] = 1;
	while(l<r) {
		++l;
		x=h[1][l];
		y=h[2][l];
		d=h[4][l];
		for(i=0;i<4;++i) {
			xx=x+k1[i];
			yy=y+k2[i];
			if((g[xx][yy]==1)&&(!v[xx][yy][d])) {
				v[xx][yy][d]=1;
				++r;
				h[1][r]=xx;
				h[2][r]=yy;
				h[3][r]=h[3][l] + 1;
				h[4][r] = d;
				if(xx==n&&yy==m) {
					cout << h[3][r] << "\n";
					return 0;	
				}
			}
				
				if(g[xx][yy]!=0) 
					for(j=2;j<=100;++j) {
						xx=xx+k1[i];
						yy=yy+k2[i];
						if(g[xx][yy]==0||j>d) break;
						if((g[xx][yy]==1)&&(!v[xx][yy][d-j])) {
							v[xx][yy][d-j]=1;
							++r;
							h[1][r]=xx;
							h[2][r]=yy;
							h[3][r]=h[3][l] + 1;
							h[4][r] = d-j;
							if(xx==n&&yy==m) {
								cout << h[3][r] << "\n";
								return 0;	
							}
					}
				}
		}
}
	printf("impossible \n");
	return 0;
}