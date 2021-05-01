#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,i,c=1,s=0;
	cin>>b>>a;
	for(i=1; i<=a; i++) {
		c=c*b;
		}
	for(i=1; i<=c; i++) {
		if(c%i==0)s=s+i;
		}
	cout << s ;
	return 0;
	}