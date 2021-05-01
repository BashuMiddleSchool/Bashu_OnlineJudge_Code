#include<bits/stdc++.h>
using namespace std;
int flag=0;
int a[1000005];
int main() {
	int n,x,i,j;
	cin>>n>>x;
	for(i=1; i<=n; i++) {
		for(j=10; j<=i*10; j=j*10) {
			if((i%j-i%(j/10))/(j/10)==x) flag++;
		}
	}
	cout<<flag;
}
