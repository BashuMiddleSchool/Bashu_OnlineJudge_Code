#include<bits/stdc++.h>
using namespace std;
int main() { //cout<<b[i]<<"+";
	int x,y,c,a[20005],b[20005],i,bj=0;
	char z[20005];
	cin>>x>>y;
	cout<<x<<"*"<<y<<"=";
	if(x%2==0)c=0;
	else {
		c=y;
		cout<<y;
		bj=1;
		}
	a[0]=x;
	b[0]=y;
	for(i=1; a[i-1]!=1; i++) {
		a[i]=a[i-1]/2;
		b[i]=b[i-1]*2;
		if(a[i]%2!=0&&bj==0) {
			c=c+b[i];
			cout<<b[i];
			bj=1;
			continue;
			}
		if(a[i]%2!=0) {
			c=c+b[i];
			cout<<"+"<<b[i];
			}
		}
	if(a[i]%2==0)cout<<"="<<c<<endl;
	}
