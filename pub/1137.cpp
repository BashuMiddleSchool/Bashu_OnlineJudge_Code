#include<iostream>
using namespace std;
int a,b[100000],i,fuc=0;
int main() {
	int n;
	cin>>n;
	for(i=1; i<=n; i++)cin>>b[i];
	for(i=1; i<=n; i++) {
		a+=fuc;
		fuc=b[i]*i-a;
		cout<<fuc<<" ";
	}
}