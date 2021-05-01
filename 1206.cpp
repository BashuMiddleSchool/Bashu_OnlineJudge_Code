//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	double k,sn=1,n;
	cin >> k; 
	for(int i=2;sn<=k;i++) {
		sn+=1.0/i;
		//cout<< sn << "\n";
		n=i;
	}
	cout << n << '\n';
	return 0;
}
