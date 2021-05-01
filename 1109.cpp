#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	int a,b,n,bc;
	cin>>a>>b>>n;
	for(int i=1; i<=n; i++) {
		if(a<b) {
			b=b-a;
			bc=a;
		} else {
			a=a-b;
			bc=b;
		}
	}
	cout<<bc;
	return 0;
}