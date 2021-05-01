#include<bits/stdc++.h>
using namespace std;
long long b,s[2][3000],al,l;
void division();
char a[3000];
void division() {
	for(int i=al+100; i>0; i--) {
		s[0][i]=s[1][i]/b;
		if(s[1][i]%b) s[1][i-1]+=s[1][i]%b*10;
		}
	}
int main() {
	cin>>a>>b;
	al=strlen(a);
	for(int i=1; i<=al; i++) s[1][100+i]=a[al-i]-'0';
	division();
	l=al+100;
	while(!s[0][l]&&l>101) l--;
	for(int i=l; i>100; i--) {
		if(i==100) printf(".");
		cout <<s[0][i];
		}
	cout <<"\n";
	return 0;
	}
