#include<bits/stdc++.h>
using namespace std;
int main() {
	int i,k,t,mem,m;
	string s;
	cin>>k;
	cin>>s;
	t=0;
	m=1;
	mem=s.length();
	for(i=mem-1; i>=0; i--) {
		if(s[i]>='0'&&s[i]<='9')t=t+(s[i]-'0')*m;
		else t=t+(s[i]-55)*m;
		m=m*k;
	}
	cout<<'(';
	for(i=0; i<=mem-1; i++)cout<<s[i];
	cout<<')'<<k<<'='<<'('<<t<<')'<<10;
	return 0;
}