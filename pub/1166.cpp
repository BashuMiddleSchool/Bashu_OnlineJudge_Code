#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i!=0) continue;
		int b=n/i,bj=1;
		
		for(int j=2;j<=sqrt(i);j++) {
			if(i%j==0) {
				bj=0;
				break;
			}
		}
		
			for(int j=2;j<=sqrt(b);j++) {
			if(b%j==0) {
				bj=0;
				break;
		}
		
	}
	if(bj==1) {
		cout << b;
		break;
	}
	}
}