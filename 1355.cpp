#include<bits/stdc++.h>
using namespace std;

	int dp[1005],m[1005];
	int main() {
		int n,dpout=-1;
		cin>>n;
		for(int i=1; i<=n; i++) 
		cin>>m[i];
		for(int i=1; i<=n; i++) {
			dp[i]=1;
			for(int j=1; j<i; j++) {
				if(m[j]<m[i])
					dp[i]=max(dp[i],dp[j]+1);
			}
			dpout=max(dpout,dp[i]);
		}
		cout<<dpout;
		return 0;
	}