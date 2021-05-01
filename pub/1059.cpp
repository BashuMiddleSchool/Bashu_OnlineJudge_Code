#include<iostream>
using namespace std;
//不要全局 
int main() {
	int max=0,d=0,x=0,k=0;
	int n;
	cin >> n;
	char a,b,c;
    for(int i=1;i<=n;i++){
    	x=0;
    	for(int j=0;;j++){
    		cin >> a;
    		if(a == 'E') break;
    		if(a == 'Y') {
			x=x+1;
			k=k+1;
			}
    		if(a=='N') k=0;
    		if(k==3) {
			x=x+1;
			k=0;
			}
    	}
    	if(x>=max)  {
			max=x;
			d=i;
		}
    }
    cout<<d<<"\n" << max;
	return 0;
}