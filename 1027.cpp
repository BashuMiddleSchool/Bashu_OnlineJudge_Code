#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((b*b-4*a*c)>=0) cout<<"YES";
	else if((b*b-4*a*c)<0) cout<<"NO SOLUTION";

	
	return 0;
}