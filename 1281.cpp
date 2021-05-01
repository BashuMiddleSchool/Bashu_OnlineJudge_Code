#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000]= {0},c[1000]= {0},d[1000]= {0},s=0;
void search(int k) {
	int i,j;
	if(k==n+1) {
		for(i=1; i<=n; i++) cout<<a[i]<<' ';
		s++;
		cout<<endl;
	} else for(j=1; j<=n; j++) {
			if(! b[j] && ! c[k+j] && ! d[n+k-j]) {
				a[k]=j;
				b[j]++;
				c[k+j]++;
				d[n+k-j]++;
					search(k+1);
				b[j]--;
				c[k+j]--;
				d[n+k-j]--;
			}
		}
}
int main() {
	cin>>n;
	search(1);
	if(s==0) cout<<"no solute!"<<endl;
	return 0;
}