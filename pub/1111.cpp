#include<iostream> 
#include<iomanip>
 #include<cmath>
 #include<string>
 #include<cstdio>
 using namespace std;
int main() { 
int a[5005]={0},j,c=0,n,i,m,d=0; 
cin>>n>>m; 
for(i=1;i<=m;i++)
{ 
for(j=1;j<=n;j++){ 
if(j%i==0&&a[j]==0){a[j]=1;continue;} 
if(j%i==0&&a[j]==1){a[j]=0;continue;} }} 
for(i=1;i<=n;i++) c=c+1; 
for(i=1;i<=n;i++){ 
if(a[i]==1&&d==0){cout<<i;d++;} 
else if(a[i]==1)cout<<","<<i; }
return 0; 
}