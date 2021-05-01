#include<iostream>
using namespace std;
int main()
{	int i,j,r,b,mn=1,a=0,k=0;
	cin>>r>>b;
	for(i=1; i<=r/2; i++)
		for(j=1; j+i+4<=(r+4)/2&&j*i<=b; j++)
		{	if((i+2)*(j+2)>=mn) a=i+2,k=j+2,mn=(i+2)*(j+2);

		}
	cout<<a<<" "<<k;
}