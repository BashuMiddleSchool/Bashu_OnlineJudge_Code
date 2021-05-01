//lijunhao
#include<bits/stdc++.h>
using namespace std;
struct node {
	int a,b;
}t[501];
int h[501]={0};
bool comp(node x,node y) {
	return x.b>y.b;
}
int main()
{
	int n,m,tot=0,bj,ans;
	cin>>m>>n;
	for(int i=1;i<=n;i++)scanf("%d",&t[i].a);
	for(int i=1;i<=n;i++)scanf("%d",&t[i].b);
	sort(t+1,t+n+1,comp);
	for(int i=1;i<=n;i++) {
		bj=0;
		for(int j=t[i].a;j>=1;j--)
			if(!h[j]) {
			bj=1,h[j]=1;
			break;
		}
		if(!bj) {
			for(int k=n;k>=1;k--)
				if(!h[k]) {
					h[k]==1;
					break;
				}
			tot+=t[i].b;
		}
		ans=m-tot;
	}
	cout<<ans<<"\n";
	return 0;
}