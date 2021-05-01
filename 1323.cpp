#include<bits/stdc++.h>
using namespace std;
int a[200010]= {0,0};
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int sum=0;
	for (int i=1; i<=n; i++) {
		sum++;
		if (a[i]==a[i+1]) continue;
		else {
			printf("%d %d\n",a[i],sum);
			sum=0;
		}
	}
	return 0;
}