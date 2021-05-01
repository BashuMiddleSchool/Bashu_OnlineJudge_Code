#include<bits/stdc++.h>
using namespace std;
int n,l,m[31],vis[150];
char s[1000];
long long ncount =1;
int isearch(int x) {
	if(x==n+1)  {
		cout<<ncount<<":";
		for(int i=1; i<=n; i++) 
		cout<<(char)m[i];
		cout<<endl;
		ncount++;
	}
	for(int i=0; i<l; i++) {
		if(!vis[i]) {
			m[x]=s[i];
			vis[i]=1;
			isearch(x+1);
			m[x]=0;
			vis[i]=0;
		}
	}
}
int main() { //主函数
	cin>>s;
	l=strlen(s);
	sort(s,s+l);
	n=l; //元素数
	isearch(1);
	return 0;
}
