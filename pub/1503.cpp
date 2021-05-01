#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int maxn = 200010;
int n, k, a[maxn], b[maxn],s[maxn] ;
int top,tot,ans;
int main() {
	int x = 0;
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	for(int i = 1; i < k; ++i) {
		if(a[i] < a[k])
			b[++tot] = a[i];
	}
	b[++tot] = a[k];
	for(int i = k + 1; i <= n; ++i) {
		if(a[i] > a[k])
			b[++tot] = a[i];
	}
	for(int i = 1; i <= tot; ++i) {
		if(b[i] > s[top])
			s[++top] = b[i];
		else {
			int l = 1, r = top, mid;
			while(l <= r) {
				mid = (l >> 1) + (r >> 1) + (l & r & 1);
				if(s[mid] < b[i])
					l = mid + 1;
				else r = mid - 1;
			}
			s[l] = b[i];
		}
	}
	ans=top;
	cout << ans;
	return 0;
}