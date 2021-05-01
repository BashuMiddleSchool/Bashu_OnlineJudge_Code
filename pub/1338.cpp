#include<bits/stdc++.h>
#define nmax 0x7fffffff
using namespace std;
int n,x,y,a[101][101],b[110],f[110],k[111],ans,head=1,tail=1;
int main() {
	cin>>n>>x>>y;
	f[1]=x,k[1]=0,b[x]=1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
		scanf("\n");
	}
	for(;head<=tail;) {
		ans = f[head];
		if(ans==y) {
			cout << k[head]-1 << "\n";
			return 0;
		}
		for(int i=1; i<=n; i++)
			if(a[i][ans]==1&&b[i]==0) {
				tail++;
				f[tail]=i;
				b[i]=1;
				k[tail] = k[head]+1;
			}
		head++;
	}
	return 0;
}