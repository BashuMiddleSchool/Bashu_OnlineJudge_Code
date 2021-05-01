#include<iostream>
#include<iomanip>
using namespace std;
int fun(int m) {
	int n,i,bj=1;
	for(i=2; i<m-1; i++) {
		if(m%i==0) {
			bj=0;
			break;
			}
		}
	return bj;
	}
int main() {
	int n,i,j;
	cin>>n;
	for(i=2; i<n/2; i++)
		for(j=2; j<n; j++)
			if(fun(i)!=0&&fun(j)!=0&&i+j==n) {
				cout<<i<<"+"<<j<<endl;
				return 0;
				}
	}