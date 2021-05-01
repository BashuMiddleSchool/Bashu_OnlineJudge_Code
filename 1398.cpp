//lijunhao
#include<iostream>
#include<cmath>
using namespace std;
string c;
int n,i,a[300],top=0,s[300],t;
int main()
{
	cin >> n;
	while(n--) {
		cin>>c;
		top=0;a[0]=0;
		for(i=0;i<c.length();i++){
			if(c[i]=='<')a[++t]=1;
			if(c[i]=='>')a[++t]=-1;
			if(c[i]=='(')a[++t]=2;
			if(c[i]==')')a[++t]=-2;
			if(c[i]=='[')a[++t]=3;
			if(c[i]==']')a[++t]=-3;
			if(c[i]=='{')a[++t]=4;
			if(c[i]=='}')a[++t]=-4;
			if(a[t]>0){
				if(top==0)s[++top]=a[t];
				else if(abs(s[top])>=abs(a[t]))s[++top]=a[t];
				else {
					top=-1;
					break;
				}
			}
			else if(top&&a[t]+s[top]==0)
			top--;
			else if(a[t]&&s[top]!=0) {
				top=-1;
				break;
			}
	    }
			if(top!=0)
				cout<<"NO\n";
			else 
			cout<<"YES\n";
	}
	return 0;
}