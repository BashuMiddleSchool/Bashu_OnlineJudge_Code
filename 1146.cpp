#include<bits/stdc++.h>
using namespace std;
int a[5000],b;
void times(int a[],int b) {
	int i;
	for(i=1; i<=a[0]; i++)a[i]=a[i]*b;
	for(i=1; i<=a[0]; i++) {
		a[i+1]+=a[i]/10;
		a[i]%=10;
		}
	while(a[a[0]+1]>0) {
		a[0]++;
		a[a[0]+1]=a[a[0]]/10;
		a[a[0]]%=10;
		}
	}
void print(int a[]) {
	int i;
	if(a[0]==0) {
		cout<<0<<"\n";
		return;
		}
	for(i=a[0]; i>=1; i--)cout<<a[i];
	cout<<"\n";
	}
int main() {
	int n,i;
	cin>>n;
	a[0]=1;
	a[1]=1;
	for(i=1; i<=n; i++)times(a,i);
	print(a);
	return 0;
	}