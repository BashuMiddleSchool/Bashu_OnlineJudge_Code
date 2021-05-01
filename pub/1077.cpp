#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m=0,s=0,x=0;
	char ch;
	string t;
	cin>>n>>ch;
	for(int i=1; i<=n; i++) {
		cin>>t;
		if(t[0]=='c' && t[1]=='o' && t[2]=='n')
			m++;
		int len=t.length();
		s=s+len;
		for(int j=0; j<len; j++) {
			if(t[j]==ch)
				x++;
		}
	}
	cout<<m<<endl;
	cout<<fixed<<setprecision(2)<<(double)x/s*100<<"%"<<endl;
	return 0;
}