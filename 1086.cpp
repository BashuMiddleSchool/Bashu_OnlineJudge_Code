#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,j,a[105],k,m,ti;
	double n,x;
	cin>>n;
	m=int(n);
	x=n-m;
	for(i=1;m!=0;i++)
	{a[i]=m%2;
	m=m/2;
	}
	for(j=i-1;j>=1;j--)cout<<a[j];
	cout<<".";
	j=0;
	while(x!=0)
	{ti=int(x*2);
	x=x*2-ti;
	cout<<ti;
	j++;
	if(j==20)break;
	}
}