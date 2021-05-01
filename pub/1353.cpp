#include<bits/stdc++.h>
using namespace std;
const int n = 5005;
char s1[n],s2[n];
int len1,len2,c[n][n];
int main() {
	scanf("%s%s",s1+1,s2+1);
	len1 = strlen(s1+1);
	len2 = strlen(s2+1);
	for(int i=1;i<=len1;++i) {
		for(int j =1;j<=len2;++j) {
			if(s1[i]==s2[j])
			c[i][j] = c[i-1][j-1]+1;
			else c[i][j] = max(c[i][j-1],c[i-1][j]);
		}
		
	}
	cout << c[len1][len2] << "\n";
	return 0;
} 