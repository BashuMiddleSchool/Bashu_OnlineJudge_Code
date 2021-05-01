#include<bits/stdc++.h>
using namespace std;
string a;
char s[1000005];
int l,n,top;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		top=0;
		cin>>a;
		l=a.length();
		for(int j=0; j<l; j++) {
			top++;
			if(a[j]=='#') top=0;
			else if(a[j]=='$') {
				top-=2;
				if(top<0)top=0;
			} else {
				s[top]=a[j];
			}
		}
		for(int j=1; j<=top; j++) cout<<s[j];
		cout<<endl;
	}
}