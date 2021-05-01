#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    double x,y,z;
    cin>>x>>y>>z;
    for(i=1;i<=100;i++) {
    	for(j=1;j<=100;j++) {
    		for(k=1;k<=100;k++) {
    			if((i+j+k==100)&&(i*x+j*y+k*z==100))
    			cout<<i<<" "<<j<<" "<<k<<endl;
	    	}
		}
	}
	return 0;
}