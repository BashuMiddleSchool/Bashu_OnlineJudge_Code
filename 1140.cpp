#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;
const int maxn=100;
int a[maxn],b[maxn],c[maxn];
int la,lb,lc;
string s;
int main() {
	cin>>s;
	la=s.length();
	for(int i=0;i<la;i++)
		a[la-i]=s[i]-48;
	cin>>s;
	lb=s.length();
	for(int i=0;i<lb;i++)
		b[lb-i]=s[i]-48;
	int i,x=0;
	for(i=1;i<=la||i<=lb;i++) {
		c[i]=a[i]+b[i]+x;
		x=c[i]/10;
		c[i]%=10;
	}
	c[i]=x;
	lc=i;
	while(c[lc]==0&&lc>1)
		lc--;
	for(int i=lc;i>=1;i--)
		cout<<c[i];
	return 0;
}