#include<iostream>
using namespace std;
int main()
{
 int a[16][16],i,j,m,d,n;
	cin>>n;
	i=1;j=1;m=1;d=1;
	while(m<=n*n){
  a[i][j]=m;
	 if(d==1) {
   i++;
   if(j==1)
    d=2;
   else 
    d=4;
  }
	else if(d==2) {
  i--;
  j++;
  if(j==n)
   d=1;
  else if(i==1)
   d=3;}
	 else if(d==3) {j++;if(i==n)d=2;else d=4;}
	 else if(d==4) {i++;j--;if(i==n)d=3;else if(j==1)d=1;}
	 m++;
	}
	for(i=1;i<=n;i++) {
  for(j=1;j<=n;j++) {
   cout<<a[i][j]<<" "; 
  }
	cout<<"\n";
 }
 return 0;
}