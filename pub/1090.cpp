#include <iostream>
#include <cstdio>
using namespace std;
int main() 
{
	char a;
	int b[27]={0};
	while(a!='.')
	{
		cin>>a;
		if(a>='a'&&a<='z')
		{
			b[a-'a'+1]++;
		}
	}
	for(int i=1;i<=26;i++)
	{
		if(b[i]>0)
		cout<<char(i+'a'-1)<<':'<<b[i]<<endl;
	}
	return 0;
}