#include<bits/stdc++.h>
using namespace std;
int ok(int,int);
void dfs(int k);
int n,used[20]={0},a[20],m=0;
int ok(int k,int i)
{
 int j,s,bj;
 if(k==1)return 1;
 s=a[k-1]+i;
 bj=1;
 for(j=2;j<=int(sqrt(s));j++)
 {
  if(s%j==0)
  {
   bj=0;
   break;
  }
 }
 if(k==n)
 {
  s=a[1]+i;
  for(j=2;j<=int(sqrt(s));j++)
  {
   if(s%j==0)
   {
    bj=0;
    break;
   }
  }
 }
 return bj;
}
void dfs(int k)
{
 int i;
 if(k==n+1)
 {
  m++;
  for(i=1;i<=n;i++)
   cout<<a[i]<<" ";
  cout<<endl;
 }else{
  for(i=1;i<=n;i++)
  {
   if(!used[i]&&ok(k,i))
   {
    a[k]=i;
    used[i]=1;
    dfs(k+1);
    used[i]=0;
   }
  }
 } 
}
int main()
{
 cin>>n;
 dfs(1);
 if(m==0)cout<<"NO"<<endl;
 return 0;
}