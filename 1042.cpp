#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n,i,f=1;
	cin>>n;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	{
		f=0;break;
	}
	if(f)cout<<"YES";
	else cout<<"NO";
	return 0;
}
