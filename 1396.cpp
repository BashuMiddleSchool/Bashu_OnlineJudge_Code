#include<bits/stdc++.h>
using namespace std;
char in[255];
int lq,rq,num;
int main() {
	int i=0;
	for(i=0;in[i]!='@';i++) {
		cin >> in[i];
		if(in[i]=='(') lq++;
		if(in[i]==')') rq++;
		if(in[i]=='@') {
		num=i;
		break;
	}
		
	}
	for(int i=0;i<num;i++) {
	if(in[i]=='(') rq--;
	if(in[i]==')') lq--;	
	}
	if(rq==0&&lq==0) cout << "YES" ;
	else cout << "NO" ;
	return 0;
}