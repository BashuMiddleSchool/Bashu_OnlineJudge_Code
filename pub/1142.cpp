#include <bits/stdc++.h>
using namespace std;
char s1[300], s2[300];
int a[300];
int main() {
	int fk, b, m;
	cin>>s1>>b;
	fk=strlen(s1);
	for(int i=1; i<=fk; i++)
		a[i]=s1[fk-i]-48;
	for(int i=1; i<=fk; i++)
		a[i]=a[i]*b;
	for(int i=1; i<=fk; i++) {
		a[i+1]+=a[i]/10;
		a[i]=a[i]%10;
		}
	m=a[fk+1];
	while(m>0) {
		a[++fk]=m % 10;
		m=m/10;
		}
	for(int i=fk; i>=1; i--) {
		printf("%d",a[i]);
		}
	return 0;
	}
