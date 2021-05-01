#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int jyh[1001][1001],a[1001][1001],n;
int dfs(int x,int y) {
	
	if(jyh[x][y]!=0) {
		return jyh[x][y];
	}
	if(x==n)
		jyh[x][y]=a[x][y];
	else {
		jyh[x][y]=max(dfs(x+1,y),dfs(x+1,y+1))+a[x][y];
	}
	return jyh[x][y];
}
int main() {
	cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cin >> a[i][j];
		}
	}
	cout << dfs(1,1);
	return 0;
}