#include<bits/stdc++.h>
using namespace std;
int main()
{int t=0,t2=0,l,l2;
string s,ss;
getline(cin,ss);
getline(cin,s);
l=s.size();
l2=ss.size();
for(int i=0;i<=l-l2;i++)
	{	int j;
		for(j=0;j<l-1;j++)
		{if(toupper(s[i+j])!=toupper(ss[j])) break;
		if(i>0&&s[i-1]!=' ') break; 
		}
		if(j==l2&&(s[i+j]==' '||j+i==l))
		{t++;
		if(t==1) t2=i;
		}
	}
	if(t==0) printf("-1\n");
	else printf("%d %d\n",t,t2);
}