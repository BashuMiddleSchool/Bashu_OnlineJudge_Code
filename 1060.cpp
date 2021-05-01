#include<iostream>
using namespace std;  
int main()
{
    int sum,i,n;
    cin>>n;
	sum=1;
	for(i=n;i>1;i--)
	sum=2*(sum+1);
    cout<<sum;
	return 0;
}