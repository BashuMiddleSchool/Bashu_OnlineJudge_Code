//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int x=1,sum=0;
string a;
int main() {
	getline(cin,a);
	for(int i=0;i<=10;i++)
	if(i!=1&&i!=5)
   {
       	sum+=(a[i]-48)*x;
      	x++;
   }
    sum=sum%11;
        if(sum==10)
        {
        	if(a[12]==88) 
            	cout<<"Right";
        else
        {
        	for(int j=0;j<=10;j++)  
        		if(j==1||j==5)
        			cout<<"-";
        		else 
        			cout<<a[j]-48;
        	cout<<"-X";
		}
	}
	else {	
 		if(sum==a[12]-48) 
		 	cout<<"Right"; 
        else {
            for(int j=0;j<=10;j++)
   				if(j==1||j==5)
   					cout<<"-";
   				else 
    				cout<<a[j]-48;
    			cout << "-" << sum;
    	}
	}
	return 0;
}
