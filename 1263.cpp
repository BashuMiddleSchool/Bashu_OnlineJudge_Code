#include<bits/stdc++.h>
using namespace std;
int n,a[500005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	sort(a+1,a+1+n,greater<int>());
	cout<<endl;
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}