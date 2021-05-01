#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int m,k;
	cin>>s>>m;
	int n=s.length();
	for(int i=1; i<=m; i++) {
		for(int j=0; j<n-1; j++)
			if(s[j]>s[j+1]) {
				for(k=j; k<n-1; k++)s[k]=s[k+1];
				break;
			}
		n--;
	}
	int i=0;
	while(s[i]=='0')i++;
	for(int j=i; j<n; j++)
		cout<<s[j];
	return 0;
}