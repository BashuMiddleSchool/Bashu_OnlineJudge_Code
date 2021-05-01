//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	double x;
	int n;
	cin >> x >> n;
	for(int i=1;i<=n;i++) {
		x=x*1.001;
	}
	cout << fixed << setprecision(4) << x << "\n";
	return 0;

}
