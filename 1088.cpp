//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,maxn=0,pos;
	int num[105];
	cin >> n;
	for(int i=1;i<=n;i++) {
		cin >> num[i];
	}
	for(int i=1;i<=n;i++) {
		if(num[i]>=maxn) {
			maxn=num[i];
			pos=i;
		}
	}
	printf("%d %d",maxn,pos);
	return 0;
}
