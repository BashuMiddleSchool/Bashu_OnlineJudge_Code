#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s,ans,ans2;
	scanf("%d",&n);
	if(n==1) cout << "1/1";
	k=0;
	s=0;
	while(s<n) {
		k++;
		s=k+s;
	}
	if(k%2==1) {
		ans=s-n+1;
		ans2=k+n-s;
		cout<< ans << "/" << ans2;
	} else {
		ans=s-n+1;
		ans2=k+n-s;
		cout << ans2 <<"/" << ans;
	}
	return 0;

}