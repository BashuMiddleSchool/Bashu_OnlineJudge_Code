#include<bits/stdc++.h>
using namespace std;
int n, k;
int ans = 0;
void dfs(int last, int tot, int cnt){
    if(tot == n && cnt == k){
        ans++;
    }
    if(cnt == k){
        return;
    }
    if(tot >= n){
        return;
    }
    for(int i = last; i <= n - tot; i++){
        dfs(i, tot + i, cnt + 1);
    }
}
int main(){
    cin >> n >> k;
    dfs(1, 0, 0);
    cout << ans;
	return 0;
}