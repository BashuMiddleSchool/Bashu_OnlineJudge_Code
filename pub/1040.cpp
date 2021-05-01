#include<iostream>
using namespace std;
int main()
{
	int x,i,s=0;
	i=0;
	cin>>x;
	while(i<=x)
	{ 
	    i++;
	     if(x%i==0) s=s+i;
	}
	cout<<s<<endl;
return 0;
}