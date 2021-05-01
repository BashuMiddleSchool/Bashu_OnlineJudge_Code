#include<bits/stdc++.h>
using namespace std;
int n,total=0;
int a[10001]={1};
int print(int);
int search(int s,int t);
int main()
{
   cin>>n;
   search(n,1);        
   return 0;
}
int search(int s,int t)
{
    int i;
    for(i=a[t-1];i<=s;i++)
    if(i<n)                
    {
        a[t]=i;           
        s-=i;              
        if(s==0) print(t);  
        else search(s,t+1); 
        s+=i;               
    }
    return 0;
}
int print(int t)
{
   total++;
   for(int i=1;i<=t;i++)
   {
       if(i==t)
       {
           cout<<a[i];
           cout<<endl;
       }
      else  cout<<a[i]<<"+";
   }
}