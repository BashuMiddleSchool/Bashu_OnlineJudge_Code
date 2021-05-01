
#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{   
   int n,a=0,b=0,c=0,s=0;   
   int i,j,k;   
   cin>>n;   
   int A[n][4];       
   for(int i=1;i<=n;i++)  
   {  	
   for(int j=1;j<=3;j++)  	
   {	     
   cin>>A[i][j];    
   s=s+A[i][j];      
   }       
   }    
   for(i=1;i<=n;i++)	 
   {	       
   a=a+A[i][1];          
   b=b+A[i][2];       
   c=c+A[i][3]; 
   }  
   cout<<a<<" "<<b<<" "<<c<<" "<<s;    
   return 0;
}
 