
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b=0;
	cin>>a;
	while(a!=0)
	{
		b=a%10+b;
		a=a/10;
	}
	cout<<b;
	return 0;
}