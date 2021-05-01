#include <iostream>
using namespace std;
int main( ){
	long long f1,f2,f;
	int i,n;
	cin >> n;
	f1=f2=1;
	if(n<=2)
		f=1;
	else
		for(i=2;i<=n;i++) {
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	cout << f;
}