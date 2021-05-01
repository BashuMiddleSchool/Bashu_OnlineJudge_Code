//lijunhao
#include<bits/stdc++.h>
using namespace std;
int f[1111];
int main()
{
	int n;
	cin >> n;
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=i-2;j++)
			f[i]=(f[i] + f[j] * f[i-j-2]) % 12345;
		f[i]=(f[i]+f[i-1]) % 12345;
	}
	cout << f[n] << "\n";
	return 0;
}