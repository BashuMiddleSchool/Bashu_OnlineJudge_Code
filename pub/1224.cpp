#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int n,m,sa=0,sb=0,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		if(i==j)
		{
			sa=sa+(n-i+1)*ceil(m-j+1);
		}
		else 
			sb=sb+(n-i+1)*(m-j+1);
	}
	cout<<sa<<" "<<sb;
	return 0;
}