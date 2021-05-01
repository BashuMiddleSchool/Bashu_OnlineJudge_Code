#include<bits/stdc++.h>
using namespace std;
int h[1001];
void dfs(int m) {
	int i;
	if(h[m]!=-1) return; 
	h[m]=1;
	for(i=1;i<=m/2;i++) {
		dfs(i);
		h[m]+=h[i]; 
	}
}

int main() {
	int n;
	cin >> n;
	for(int i =1;i<=n;i++) {
		h[i] = -1;
		dfs(n);
	}
	cout << h[n];
		return 0;
}