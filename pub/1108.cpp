#include<iostream>
using namespace std;
int main() {
	int m,n,did;
	cin>>m>>n>>did;
	while(did>0) {
		if(m%n==0)did=did-m/n;
		else did=did-m/n-1;
		if(did < 0)break;
		n += m / n;
	}
	cout<<n;
	return 0;
}