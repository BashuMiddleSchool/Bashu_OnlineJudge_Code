#include<bits/stdc++.h>
using namespace std;
int main() {
	int k,b,c;
	cin>>k;
	c=k;
	if(k==1) {
		cout<<1;
		return 0;
	}
	for(int i=1; i<=k; i++) {
		b+=i*i;
		c-=i;
		if(c<=0) {
			b=b+c*i;
			break;
		}
	}
	cout<<b;
	return 0;
}