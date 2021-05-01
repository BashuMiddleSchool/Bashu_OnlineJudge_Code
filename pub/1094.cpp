#include<iostream> 
using namespace std; 
int main() { 	
    int m,n,i,s,t,a[105]; 
    cin>>m>>n; 	
    for(i=1;i<=m;i++)
        a[i]=i; 	
        i=0;
        s=0;
        t=0; 	
        while(s<m) 	{
            i++; 
            if(i==m+1) i=1; 	
            if(a[i]!=0) t++; 	
            if(t==n) {
                cout<<a[i]<<" ";
                a[i]=0;
                t=0;
                s++;
            } 	
        }
    return 0;   
}