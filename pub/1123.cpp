//lijunhao
#include<bits/stdc++.h>
using namespace std;
int ans = 0;
const int MAX=1e7;
struct queueq {
	int head,tail;
}a[MAX];

int cmp (queueq x,queueq y) {
	return x.tail<y.tail;
}

int best (int limiti,int x) {
	for (int i=0; i<limiti ;i++)
		if(a[i].head>=x) {
			ans++;
			x=a[i].tail;
		}
	return ans;
}
	
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	cin >> a[i].head >> a[i].tail;
	sort(a,a+n,cmp);
	int t = 0;
	cout << best(n,t);
	return 0;
}