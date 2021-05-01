#include<iostream>
using namespace std;
int main()
{
	int a,b,c[1001],d[1001],f,e=0;
	cin>>a;
	for(b=1;b<=a;b++)
	{
		cin>>c[b];
	}
	for(b=1;b<=a;b++)
	{
		cin>>d[b];
	}
	for(f=1;f<=a;f++)
	{
		e=e+c[f]*d[f];
	}
	cout<<e<<endl;
	return 0;
}