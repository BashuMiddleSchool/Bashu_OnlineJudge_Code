#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    double s=n,p=200;
    int i=1;
    while((s<p)&&(i<21)) {
    	s+=n;
    	p*=(1+(double)k/100);
    	i++;
	}
	if(i>20) cout<<"Impossible"<<endl;
	else cout<<i<<endl;
	return 0;
}