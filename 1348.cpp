#include<bits/stdc++.h>
using namespace std;
const long long N=31111,INF = 1 << 30; //???
int h[N],f[N],d[N];
int ans1,ans2,n;
int main() {
	int i,j;
	cin >> n;
	for(int i=1;i<=n;++i) {
		cin >> h[i];
	}
	for(int i=1;i<=n;++i) {
		for(int j=1;j<=n;++j) {
			if(h[j] >=h[i]) f[i]=max(f[i],f[j]);
		}
		f[i]++;
	}
	for(i=1;i<=n;++i) {
		ans1=max(ans1,f[i]);
	}	
	for(i=1;i<=n;++i) {
		int wh=0,nowh=INF;
			for(int j=1;j<=ans2;++j) {
				if(d[j]>=h[i] && d[j] < nowh) 
				nowh=d[j],wh=j;
			}
			if(wh)
			d[wh]= h[i];
			else d[++ans2] = h[i];
	}	
		cout << ans1 << "\n"<< ans2;
		return 0;
}