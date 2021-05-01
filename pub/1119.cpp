#include<bits/stdc++.h>
using namespace std;
typedef long long s;
s m,sum,i;
int main() {
	cin>>m;
	for(s i=1; sum<m; i++) {
		sum+=i;
		if(sum>=m) {
			cout<<i;
			return 0;
		}
	}
	return 0;
}
