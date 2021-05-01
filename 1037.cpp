#include<iostream>
using namespace std;
int main()
{    int n,a[1001];
    int min=9999,max=0;
    int i;     
	cin>>n;    
	for(i=1; i<=n; i++)    
	{        
	    cin>>a[i];
        if(a[i]>max)            
		max=a[i];        
		if(a[i]<min)
		min=a[i];    
	}     
	cout<<max-min<<endl;
    return 0;
}