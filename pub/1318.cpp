//重在搞懂
#include<iostream>
using namespace std;
int a[1001],top=0,b[1001],n,k=1,ncount=0;
char ch;
int main() {
	cin>>n;
	while(n--) {
		cin>>ch;
		if(ch=='A') a[++ncount]=k,++k;
		else if(ch=='B'&&top<5) b[++top]=k,++k;
		else if(ch=='C'&&top) a[++ncount]=b[top],--top;
		else  {
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	for(int i=1; i<=ncount; i++) {
		cout<<a[i]<<endl;
	}
	return 0;
}