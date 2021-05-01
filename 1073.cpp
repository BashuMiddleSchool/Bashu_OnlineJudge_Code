
#include<iostream>
using namespace std;

main() {
	int a[100][100];
	int n,m,s=0,t=0;
	cin>>n;
	m=n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) { //输入
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			s=0;
			for(int k=0; k<m; k++) {
				if(a[i][j]<=a[i][k]) {    //判断行最小
					s++;
				} else break;
			}
			for(int l=0; l<n; l++) {
				if(a[i][j]>=a[l][j]) {  //判断列最大
					s++;
				} else break;
			}
			if(s==m+n) {
				cout<<"(" << i+1<<","<<j+1 << ")";   //输出
				t++;
			}
		}
	}

	if(t==0) {
		cout<<"not exit"<<endl;   //若没有满足题意的马鞍数，输出not exit
	}
	return 0;
}