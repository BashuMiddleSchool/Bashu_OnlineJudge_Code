#include<bits/stdc++.h>
using namespace std;
long long a[1010][8899];
int main()
{
	int n;
	cin>>n;
	a[1][1]=1;
   	for(int i=1;i<=n;i++) {
   		for(int j=1;j<=n;j++) {
   			a[i][j]+=a[i-1][j]+a[i][j-1];
   			a[i][j]%=100003;
   		}
   	}
   printf("%lld",a[n][n]);
   return 0;
}