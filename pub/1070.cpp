#include<iostream>
using namespace std;
int main() {
	int a[106],s=0,n;
	int i,c;
	cin>>c;
	for(i=1; i<=c; i++)
		cin>>a[i];
	for(i=2; i<=c-1; i++) {
		if((a[i-1]<a[i]&&a[i]>a[i+1])||(a[i-1]>a[i]&&a[i]<a[i+1]))
			s++;
	}
	cout<<s+1<<endl;
	return 0;
}