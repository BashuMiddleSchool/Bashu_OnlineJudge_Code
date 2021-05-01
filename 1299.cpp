#include<iostream>
#define loop(n) for(i=1; i<n; i++)
#define loop(n1) for(i=1; i<=n; i++)
using namespace std;
int main() {
	int n,p,a[101],i,s=0,c=0;
	cin>>n;
	for(i=1; i<=n; i++) {
		cin>>a[i];
		s+=a[i];
	}
	p=s/n;
	loop(n1)
		a[i]-=p;
	loop(n])
		if(a[i]!=0) {
			a[i+1]+=a[i];
			c++;
		}
	cout<<c<<endl;
}