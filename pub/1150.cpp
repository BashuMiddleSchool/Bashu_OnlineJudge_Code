#include<iostream>
using namespace std;
int main() {
	int n,s,m,a,l=10000000,c=0;
	cin>>n;
	for(int i=3; i>0; i--) {
		cin>>s>>m;
		for(a=n; a>0;) {
			a-=s;
			c+=m;
			}
		if(l>c)l=c;
		c=0;
		}
	cout<<l<<"\n";
	return 0;
	}