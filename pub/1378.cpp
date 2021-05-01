#include <iostream>
#include<cstring>
using namespace std;
int a[201],g[201],fmax[201][201],fmin[101][101],i,j,k,t,ans1=0x7fffffff,ans2=0;
int main() {
	int n;
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>a[i];
		a[i+n]=a[i];
	}
	for(i=1; i<=n*2-1; i++) {
		g[i]=g[i-1]+a[i];
}
		for(t=1; t<=n-1; t++) {
			for(i=1; i<=n*2-1-t; i++) {
				j=i+t;
				fmin[i][j]=0xfffffff;
				fmax[i][j]=0;
				for(k=i; k<j; k++) {
					fmin[i][j]=min(fmin[i][j],fmin[i][k]+fmin[k+1][j]);
					fmax[i][j]=max(fmax[i][j],fmax[i][k]+fmax[k+1][j]);
				}
				fmin[i][j]=fmin[i][j]+g[j]-g[i-1];
				fmax[i][j]=fmax[i][j]+g[j]-g[i-1];
			}
		}
	for(int i=1;i<=n;i++) ans1=min(ans1,fmin[i][i+n-1]);
	for(int i=1;i<=n;i++) ans2=max(ans2,fmax[i][i+n-1]);
	cout << ans1 << "\n" << ans2;
	return 0;
}