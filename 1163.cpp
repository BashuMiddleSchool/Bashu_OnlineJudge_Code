//lijunhao
#include<bits/stdc++.h>
using namespace std;

int a[100001];
int x,top=1,ans=0;
char ch;
int main()
{
	cin >> a[1];
	while(cin >> ch) {
		cin >> x;
		if(ch == '*') a[top] = (a[top] * x) % 10000;
		if(ch == '+') a[++top] = x; 
	}
	for(int i=1;i <= top;i++) {
		ans = (ans+a[i]) % 10000;
	}
	printf("%d\n",ans);
	return 0;
}
