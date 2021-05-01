#include<bits/stdc++.h>
using namespace std;
int n,l,m[31],v[150],in;
int s[1000];
long long ncount =1;
int isearch(int x) {
	if(x==n+1)  {
		for(int i=1; i<=n; i++) 
		cout<<(int)m[i] << ' ';
		cout<<endl;
		ncount++;
	}
	for(int i=0; i<l; i++) {
		if(!v[i]) {
			m[x]=s[i];
			v[i]=1;
			isearch(x+1);
			m[x]=0;
			v[i]=0;
		}
	}
}
int main() { //主函数
	cin>>in;
	for(int i=0;i<in;i++) {
		s[i]=i+1;
			l=s[i];
	}
	sort(s,s+l);
	n=l; //元素数
	isearch(1);
	return 0;
}