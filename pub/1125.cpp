#include<bits/stdc++.h>
using namespace std;

int a[1000010]={0};
int n,m,i,sum=0,ans=0;
int main() {
	cin >> n >> m ;
	for(i=1; i<=n; i++) cin>>a[i];
	for(i=1; i<=n; i++) {
		sum+=a[i];
		if(sum>m) {
			sum=0;
			ans++;
			i--;
		}
		if(i==n) ans++;
	}
	printf("%d\n",ans);
	return 0;
}