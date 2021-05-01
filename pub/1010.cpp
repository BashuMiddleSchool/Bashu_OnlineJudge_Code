#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c,d;
	cin>>a>>b>>c;
	d=sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
	cout<<fixed<<setprecision(2)<<d;
	return 0;
}