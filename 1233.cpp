#include <bits/stdc++.h>
using namespace std;
unsigned char a[1001];
int a1,a2,a3,a4,a5,a6;
int main () {
	a[0]=1;
	int i,j,k,l,m,n,bj=0;
	cin >>a1>>a2>>a3>>a4>>a5>>a6;
	for (i = 0; i <= a1; i++)
		for (j = 0; j <= a2; j++)
			for (k = 0; k <= a3; k++)
				for (l = 0; l <= a4; l++)
					for (m = 0; m <= a5; m++)
						for (n = 0; n <= a6; n++)
							if (!a[i+2*j+3*k+l*5+m*10+20*n]) {
								a[i+2*j+3*k+l*5+m*10+20*n]=1;
								bj++;
								}
	cout << "TOTAL=" << bj;
	return 0;
	}