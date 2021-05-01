#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main() {
	int n,a[1000];
	cin  >>n ;
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++)
	a[i]=(a[i-1]+a[i-2]*2)%12345;
	cout <<a[n];
	return 0; 
}
