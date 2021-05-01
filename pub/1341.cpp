#include<bits/stdc++.h>
using namespace std;
int dx[2]= {1,-1};
struct node{
	int a,t;
}
s[1000000];
int n,k;
void bfs() {
	memset( s,0,sizeof(s));
	int h=1,r=1,nowt,i,x,b[1000000];
	s[1].a=n;
	s[1].t=0;
	while(h<=r) {
		int nowx=s[h].a,nowt=s[h].t;
		if(nowx==k) {
			cout<<nowt<<endl;
			return;
		}//元素出
		for(i=0; i<=2; i++) {
			if(i<=1)x=nowx+dx[i];
			else x=2*nowx;
			if(x>=0&&x<=100000&&!b[x]) {
				r++;
				b[x]=1;
				s[r].a=x;
				s[r].t=nowt+1;
			}
		}
		h++;
	}
}
int main() {
	cin >> n >> k;
	bfs();
	return 0;

}