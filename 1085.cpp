#include <bits/stdc++.h>
using namespace std;
long  toTen(char a[], int bit) {
	int length = strlen(a);
	int i, b=1,sum=0;
	for(i=length-1; i>=0; i-- ) {
		if(a[i]>='A') {
			sum += (a[i]-'A'+10) *b;
			b *= bit;
			}
		else {
			sum += (a[i]-'0') *b;
			b *= bit;
			}
		}
	return sum;
	}

void tentoN(long int tenn,int m) {
	int r[500];
	int j=0;
	int shang=tenn;
	while(shang!=0) {
		r[j++]=shang%m;
		shang=shang/m;
		}
	for(int i=j-1; i>=0; i--) {
		if(r[i]>=10) {
			printf("%c",r[i]-10+'A');
			}
		else {
			printf("%d",r[i]);
			}
		}
	}

int main() {
	int n;
	char a[500];
	char renyi[500];
	int m;
	long int tenn;
	scanf("%d",&n);
	scanf("%s",a);
	scanf("%d",&m);
	tenn=toTen(a,n);
	tentoN(tenn,m);
	return 0;
	}