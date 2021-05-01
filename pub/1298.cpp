//lijunhao
#include<bits/stdc++.h>
using namespace std;
int n,r,cnt;
int a[500],w[500];
int main() {
	//n=3,r=2;
	cin>>n>>r;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0; i<n; i++) {
		w[i]=a[i];
	}
	for(int i=r; i<n; i++) {
		w[i]=w[i-r]+a[i];
	}
	for(int i=0; i<n; i++) {
		cnt+=w[i];
	}
	cout<<cnt;
}