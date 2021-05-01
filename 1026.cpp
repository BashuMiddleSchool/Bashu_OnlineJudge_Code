#include<iostream>
using namespace std;
int main()
{    
char a,b;   
 cin>>a>>b;   
 if((a=='S'&&b=='R')||(a=='R'&&b=='P')||(a=='P'&&b=='S'))cout<<"Fail";   
 if((a=='S'&&b=='S')||(a=='R'&&b=='R')||(a=='P'&&b=='P'))cout<<"Equ";   
 if((a=='S'&&b=='P')||(a=='R'&&b=='S')||(a=='P'&&b=='R'))cout<<"Win";	
return 0;
}