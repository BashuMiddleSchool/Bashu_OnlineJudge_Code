#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n,str;
	string s;
	char a;
	cin>>s>>n>>a;
	str=s.length();
	if(a=='L')
		for(int i=0; i<str; i++)
			if(s[i]+n>'Z')cout<<char(s[i]+n-'Z'+64);
			else cout<<char(s[i]+n);
	if(a=='R')for(int i=0; i<str; i++)
			if(s[i]-n<'A')cout<<char('Z'-(65-(s[i]-n))+1);
			else cout<<char(s[i]-n);
	return 0;
}