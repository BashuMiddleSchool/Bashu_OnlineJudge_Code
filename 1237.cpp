#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string a;
	int b,ass;
	cin>>a;
	int len=a.length();
	for(int i=0; i<len; i++) {
		if(a[i]=='!') {
			ass=i;
			break;
		}
	}
	for(int i=ass; i>=0; i--) {
		cout<<a[i];
	}
	return 0;
}