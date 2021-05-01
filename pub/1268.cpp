#include <bits/stdc++.h>
using namespace std;
int a[1001],n;
int main()
{
	int a[1001],n;
	a[1]=3;
	a[2]=7;
	a[3]=17;
	a[4]=41;
	a[5]=99;
	a[6]=239;
	a[7]=577;
	a[8]=1393;
	a[9]=3363;
	a[10]=8119;
ST:
	cin>>n;
	for(int i=11;i<=n;i++)
	a[i]=(2*a[i-1]+a[i-2])%12345;
	cout<<a[n];
}