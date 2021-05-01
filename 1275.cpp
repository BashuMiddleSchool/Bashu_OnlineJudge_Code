#include<bits/stdc++.h>
using namespace std;
int n,r;
int a[30],flag[35],t[10000],maxn=0;
void dfs(int x,int y) {
	if(x==r+1) {//没玩啦 
		for(int j=1; j<=maxn; j++)
			cout<<setw(3)<<t[j];
			cout<< endl;
	} else {
		for(int i=y; i<=n; i++) {
			if(!flag[i]) {
				flag[i]=1;//占 
				t[++maxn]=i;
				dfs(x+1,i+1);
				flag[i]=0;//还 
				maxn--;
			}
		}
	}
}
int main() {
	cin>>n>>r;
	dfs(1,1);
	return 0;
}