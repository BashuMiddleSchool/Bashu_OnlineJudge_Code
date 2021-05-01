#include<bits/stdc++.h>
using namespace std;
int ax,ay,bx,by,a[105][105],dx[]= {1,2,2,1,-1,-2,-2,-1,2,2,-2,-2},
dy[]= {-2,-1,1,2,-2,-1,1,2,-2,2,-2,2},as=1,bs=1;
struct op {
	int x,y,d;
}
q[100005];
void bf() {
	int i,s,t,nx,ny;
	memset(a,-1,sizeof(a));
	s=1;
	t=1;
	q[1].x=1;
	q[1].y=1;
	q[1].d=0;
	a[1][1]=0;
	while(s<=t) {
		for(i=0; i<12; i++) {
			nx=q[s].x+dx[i];
			ny=q[s].y+dy[i];
			if(nx>=1&&nx<=100&&ny>=1&&nx<=100&&a[nx][ny]==-1) {
				t++;
				q[t].x=nx;
				q[t].y=ny;
				q[t].d=q[s].d+1;
				a[nx][ny]=q[t].d;
			}
			if(a[ax][ay]>=0&&a[bx][by]>=0) {
				cout<<a[ax][ay]<<endl;
				cout<<a[bx][by]<<endl;
				return;
			}
		}
		s++;
	}
}
int main() {
	cin>>ax>>ay>>bx>>by;
	bf();
	return 0;
}