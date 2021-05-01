//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,a[100005];
	cin >> n;
	for(int i=1;i<=n;i++) {
		cin >>a[i];
	}
	sort(a,a+n+1);
	for(int i=1;i<=n;i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
