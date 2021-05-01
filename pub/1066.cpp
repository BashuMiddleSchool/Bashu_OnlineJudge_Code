#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[105],m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>m;
    a[i]=m;
    }
    for(int j=n-1;j>=0;j--) 
    cout<<a[j]<<" ";
    return 0;
    
}