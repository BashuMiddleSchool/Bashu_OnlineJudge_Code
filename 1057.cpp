#include<iostream>
using namespace std;
int main()
{
    int n;
    char i,j; 
    cin>>n;
    for(i=1;i<=n;i++)
    {  for(j=1;j<=n-i;j++)cout<<" ";
       for(j=1;j<=i;j++)cout<<char(64+j);
       for(j=i-1;j>=1;j--)cout<<char(64+j);
       cout<<endl;
}
    return 0;
}