#include<bits/stdc++.h>
using namespace std;
int main()  
  {  
    int x,s=0;  
    cin >> x;     
    if(x<0)
    {  
      printf("-");
      x=x*(-1);
   }  
   while(x>0)
   {  
     s=s*10+x%10;
     x=x/10;
   }  
   cout << s;
   return 0;  
 }