#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	bool fuxk=true;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]!=str[str.length()-i-1]){
			fuxk=false;
			break;
		}
	}
	cout<<(fuxk?"YES":"NO");
	return 0;
}