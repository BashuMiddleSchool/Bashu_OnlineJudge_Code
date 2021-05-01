//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int f(int m,int n)  
{
    if(m==0||n==1)  
        return 1;   
    if(n>m)
        return f(m,m);
    else
        return f(m,n-1)+f(m-n,n);
}

int main()
{
    int t,m,n;
    cin >>t ;
    while(t--)
    {
    	cin >> m >> n;
    	cout << f(m,n) << "\n";
    }
	return 0;
}
