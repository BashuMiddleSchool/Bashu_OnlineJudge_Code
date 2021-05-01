#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin >> n >> m;
	char ch[101][101];
	int sur[101][101];
	memset(sur,0,sizeof(sur));
	for(int i=0; i<n; i++) {
		scanf("%s",ch[i]);
		getchar();
    }
	for(int i=0;i<n;i++) { 
		for(int j=0;j<m;j++) {
			if(ch[i][j]=='*') {
				sur[i][j]=-1;
				continue;
			}
			if(ch[i-1][j-1]=='*') sur[i][j]++;
			if(ch[i-1][j]=='*')sur[i][j]++;
			if(ch[i-1][j+1]=='*')sur[i][j]++;
			if(ch[i][j-1]=='*')sur[i][j]++;
			if(ch[i][j+1]=='*')sur[i][j]++;
			if(ch[i+1][j-1]=='*')sur[i][j]++;
			if(ch[i+1][j]=='*')sur[i][j]++;
			if(ch[i+1][j+1]=='*')sur[i][j]++;
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
		if(sur[i][j]!=-1)
			printf("%d",sur[i][j]);
			else printf("*");
		}
		cout << endl;
	}
	return 0;
}