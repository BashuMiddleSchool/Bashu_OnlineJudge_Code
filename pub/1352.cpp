#include<iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxnn=2148367;

int n,k;
int a[maxnn];
int dp[2][maxnn];

int main() {
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	a[0]=0,a[n+1]=0;
	for(int i=1; i<=n; i++) {
		for(int j=0; j<i; j++) {
			if(a[i]>a[j]) dp[0][i]=max(dp[0][i],dp[0][j]+1);
		}
	}
	for(int i=n; i>=0; i--) {
		for(int j=n+1; j>i; j--) {
			if(a[i]>a[j]) dp[1][i]=max(dp[1][i],dp[1][j]+1);
		}
	}

	int maxx=-1;

	for(int i=1; i<=n; i++) {
		maxx=max(dp[0][i]+dp[1][i]-1,maxx);
	}
	cout << n-maxx;
	return 0;
}
