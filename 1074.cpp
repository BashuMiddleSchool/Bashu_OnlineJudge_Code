#include<bits/stdc++.h>
using namespace std;
double a[61][4];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		for(int j=1; j<=3; j++)
			scanf("%lf",&a[i][j]);
	for(int i=1; i<=n; i++) {
		printf("%.2lf ",(a[i][1]+a[i][2]+a[i][3])/3);
	}
	return 0;
}