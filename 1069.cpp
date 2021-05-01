#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[100],n,i,b,m,c,d;
	cin>>n;
	for(i=1; i<=n; i++) {
		cin>>a[i];
		m=i;
		for(b=1; b<=i; b++) {
			a[0]=0;
			if(a[m]<a[m-1]) {
				c=a[m];
				a[m]=a[m-1];
				a[m-1]=c;
				m=m-1;
				}
			}
		}
	for(d=1; d<=n; d++)
		cout<<a[d]<<' ';
	return 0;
	}