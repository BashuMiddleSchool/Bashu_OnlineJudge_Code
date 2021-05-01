#include<bits/stdc++.h>
using namespace std;
int Ack(int m,int n) {
	if(m==0) return n+1;
	if(m!=0&&n==0) return Ack(m-1,1);
	if(m!=0&&n!=0) return Ack(m-1,Ack(m,n-1));
}
int main() {
	int m,n;
	cin>>m>>n;
	cout<<Ack(m,n);
	return 0;
}