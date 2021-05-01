#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	int n,x=0,a,d=1;
	cin>>n;
	a=n;
	while(n)
	{
		for(int i=0;i<x;i++)
		{
			cout<<" ";
		}
		for(int i=0;i<1+(n-1)*2;i++)
		{
			cout<<"*";
		}
		x=x+1;
		cout<<endl;
		n--;
	}
}