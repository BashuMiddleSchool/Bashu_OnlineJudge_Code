#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int dfs(int x,int y) {
	if(x==0||x<y||y==0)
		return 0;
	if(y==1||x==y)
		return 1;
	return dfs(x-1,y-1)+dfs(x-y,y);
}
int main() {
	int n,k;
	cin>>n>>k;
	int x = dfs(n,k);
	cout<<x<<endl;
	return 0;
}
