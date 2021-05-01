//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,vmax=0,ans=0;
	long long v,dream[1010];
	cin >> n >> v;
	for(long long i=1;i<=n;i++) {
		cin >> dream[i];
	}
	sort(dream, dream+n);
	for(long long i=1;i<=n;i++) {
		if(v>=dream[i]) {
		v-=dream[i];
		ans++;
	}
		//cout << dream[i] << "\n";
	}
	cout << ans;
	return 0;
}
