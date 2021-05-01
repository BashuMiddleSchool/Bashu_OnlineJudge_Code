//refrence again but understanded . DIM later.
#include<bits/stdc++.h>
using namespace std;

int f[1005][1005],n,a[1005][1005],s1=0,dmin=0x3f3f3f,mi,mj;
bool bj[1005][1005];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	for(int j=1;j<=n;j++){
		for(int i=1;i<=j;i++) s1+=a[n][i];
		f[n][j]=s1;
		s1=a[n][1];
		for(int i=n;i>=j;i--) s1+=a[n][i];
		f[n][j]=min(f[n][j],s1);
		s1=0;
	}
	for(int i=n-1;i>=1;i--){
		// 第i+1行 -> 第i行 
		for(int j=1;j<=i;j++){
			f[i][j]=min(f[i+1][j],f[i+1][j+1]);
			if(j==1) f[i][j]=min(f[i][j],f[i+1][i+1]);
			if(j==i) f[i][j]=min(f[i][j],f[i+1][1]);
			f[i][j]+=a[i][j];
		}
		// 第i行内 左右移动 状态的转移
		for(int k=0; k<i; k++) {
			dmin=0x3f3f3f;
			for(int j=1;j<=i;j++) 
			    if(f[i][j]<dmin&&!bj[i][j]){dmin=f[i][j];mi=i,mj=j;}
			bj[mi][mj]=1;
			if(mj==1) f[mi][i]=min(f[mi][i],f[mi][1]+a[mi][i]);
			else f[mi][mj-1]=min(f[mi][mj-1],f[mi][mj]+a[mi][mj-1]);
			if(mj==i) f[mi][1]=min(f[mi][1],f[mi][i]+a[mi][1]);
			else f[mi][mj+1]=min(f[mi][mj+1],f[mi][mj]+a[mi][mj+1]);
		}
	}
	cout<<f[1][1];
	return 0;
}
