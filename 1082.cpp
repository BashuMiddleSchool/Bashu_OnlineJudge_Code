#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i,j;
	int a[500];
	cin>>n;
	for(i=1;n!=0;i++) {
		a[i]=n%2;
		n=n/2;
		}
	for(j=i-1; j>=1; j--) 
	cout<<a[j];
	return 0;
}