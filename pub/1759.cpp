#include <bits/stdc++.h>
using namespace std;
int main() {
	char s[10];
	gets(s);
	int l=strlen(s);
	//cout << l;
	int cnt=0;
	//cout << cnt;
	for(int i=0;i<l;i++) {
		//cout << s[i] << " ";
		if(s[i]!=' ')  cnt++;
	}
	cout << cnt;
    return 0;
}