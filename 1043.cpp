
#include<iostream>
using namespace std;
int main()
{
	int n,m,r;
	cin>>m>>n;
	while(n!=0){
		r=m%n;
		m=n;
		n=r;
	}
	cout<<m<<endl;
	return 0;
}