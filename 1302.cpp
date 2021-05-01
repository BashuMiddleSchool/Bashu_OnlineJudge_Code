//lijunhao
#include<iostream>
#include<iomanip>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
struct sj{
	int head,tail;
}a[1005];
bool cmp(sj a,sj b) {
	if(a.tail<b.tail)	
	return 1;
	else if(a.tail>b.tail)
	return 0;
}
int main(){
	int n,j,i,m,k=1;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i].head>>a[i].tail;
	sort(a+1,a+n+1,cmp);
	m=a[1].tail;
	for(i=2;i<=n;i++)
		if(a[i].head>=m) {
			k++;
			m=a[i].tail;
		}
	cout<<k<<"\n";
	return 0;
}
