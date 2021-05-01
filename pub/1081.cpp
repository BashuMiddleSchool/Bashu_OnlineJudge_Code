#include<bits/stdc++.h>
using namespace std;
int n,a[5005],m=0;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; i*j<=n; j++)
			a[i*j]^= 1;
	for(int i=1; i<=n; i++)
		if(a[i]==1)m++;
	cout<<m;
	return 0;
	}