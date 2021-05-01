#include<bits/stdc++.h> 
using namespace std; 
int main() { 	
int n,m=0,n1=0,s=0,a[105]={0}; 
	scanf("%d",&n); 
	for(int i=0;i<n;i++)cin>>a[i]; 	
for(int j=0;j<n-1;j++) 	{
n1=a[0]+a[1]; 
	m=0; 	
for(int i=0;i<n-j-1;i++) 	{
if(n1>a[i]+a[i+1]){
m=i;n1=a[i]+a[i+1];}
} 	a[m]+=a[m+1]; 
	for(int i=m+1;i<n-j-1;i++)
a[i]=a[i+1]; 	s+=n1;} 
	cout<<s<<"\n"; 
	return 0; 
}
