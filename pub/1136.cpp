//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
//高斯求和递增 
int main() {
	long long n,sum=0,forj=0;
	cin >> n;
	for(int i=1;i<=n;i++) {
		forj=forj+i;
		sum=sum+forj;
	}
	cout << sum;
	return 0;
}
