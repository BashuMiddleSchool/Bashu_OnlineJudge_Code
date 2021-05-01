#include<bits/stdc++.h>
using namespace std;
int t[10000];
char a[30];
int flag;
string dd;
	long long cs,l;
void hui(int k) {
	if(k==l+1) {
		cout << ++flag << ":" ;
		for(int j = 1;j<=l;j++) cout <<a[j]; 
		cout << "\n" ;
	}
	for(int p='a';p<='z';p++) {
		if(t[p]>0&&a[k-1]<=p) {
			t[p]--;
			a[k]=char(p);
			hui(k+1);
			t[p]++;
			
		}
}
}
int main() {
	cin >> dd>>l;
	cs = dd.length();	
	for(int i=0;i<=cs-1;i++) {
		t[dd[i]]++;
	}
	hui(1);
	return 0;
}