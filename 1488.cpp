#include <bits/stdc++.h>
using namespace std;
const int INF=2147483647;
int mins[21],minv[21],m,n,ans;
void search(int v,int s,int p,int r,int h) {
	int i,j,hh;
	if(p==0) { //已完成
		if(v==n&&s<ans)
			ans=s;
		return ;
	}
	if(v+minv[p-1]>n)
		return ;
	if(s+mins[p-1]>ans)
		return ;
	if(2*(n-v)/r+s>=ans)
		return ;
	for(i=r-1; i>=p; i--) {
		if(p==m)
			s=i*i;
		hh=min((n-v-minv[p-1])/(i*i),h-1);
		for(j=hh; j>=p; j--) 
			search(v+i*i*j,s+2*i*j,p-1,i,j);
	}
}
int main() {
	cin>>n>>m;
	ans=INF;
	mins[0]=minv[0]=0;
	for(int i=1; i<21; i++) {
		mins[i]=mins[i-1]+2*i*i;
		minv[i]=minv[i-1]+i*i*i;
	}
	search(0,0,m,n+1,n+1);
	if (ans==INF) cout<<"0";
	else cout<<ans;
	return 0;
}