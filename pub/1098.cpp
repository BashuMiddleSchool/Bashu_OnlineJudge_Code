#include<bits/stdc++.h>
using namespace std;
double max(int a,int b,int c) { //定义最大 
	double x;
	if(a>b&&a>c) x=a;
	else if(b>a&&b>c) x=b;
	else x=c;
	return x;
}
int main() {
	int a,b,c;
	double m;
	cin>>a>>b>>c;
	m=max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
	cout<<fixed<<setprecision(3)<<m<<endl;
}
