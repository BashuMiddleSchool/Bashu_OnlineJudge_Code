#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int ans[10010],sum;
bool pd,bo=1;
int main() {
	cin>>a>>b;
	if(a==b) {
		cout<<0;
		return 0;
	} else if(a.length()>b.length()) pd=1;
	else if(a.length()<b.length()) pd=0;
	else if(a.length()==b.length()) {
		if(a>b) pd=1;
		else pd=0;
	}
	if(!pd) swap(a,b);
	sum=a.length()-b.length();
	for(int i=0; i<sum; i++) c=c+"0";
	b=c+b;
	for(int i=a.length()-1; i>=0; i--) {
		if(a[i]>=b[i]) ans[i]=a[i]-b[i];
		else {
			a[i-1]--;
			ans[i]=a[i]+10-b[i];
		}
	}
	if(!pd) cout<<"-";
	for(int i=0; i<=b.length()-1; i++) {
		if(bo&&ans[i]==0)continue;
		else if(ans[i]>0)bo=0;
		cout<<ans[i];
	}
	return 0;
}

