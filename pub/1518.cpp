#include<bits/stdc++.h>
using namespace std;
int w[10000][1005],a,b,m,n,x[12323],y[2000],k,l,f[100001],cnt;
int main() {
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		cin >> a >> b;
		w[a][b]++;
	}
	for(int i=1;i<=10;i++) {
		for(int j=1;j<=10;j++) {
			l=w[i][j];
			k=1;
			while(l-k*2>0) {
				cnt++;
				x[cnt]=k*i;
				y[cnt]=k*j;
				k*=2;
			}
			if(l!=0) {
				cnt ++;
				x[cnt]=(l-k+1)*i;
				y[cnt]=(l-k+1)*j;
			}
		}
	}
	for(int i=1;i<=cnt;i++) {
		for(int j=m;j>=x[i];j--) {
			f[j]=max(f[j],f[j-x[i]]+y[i]);
		}
	}
	printf("%lld",f[m]);
	return 0;
}