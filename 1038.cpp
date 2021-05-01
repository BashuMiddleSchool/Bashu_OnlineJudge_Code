#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   double x,sum=0,minn=1000000000,maxn=-1000000000;
    for(int i=1;i<=10;i++)
    {   
        cin>>x;
        sum+=x;
        if(x<minn) minn=x;
        if(x>maxn) maxn=x;
	}
    cout<<fixed<<setprecision(2)<<(sum-maxn-minn)/8;
	return 0;
	}