//惭愧 用C++做了一遍
#include<iostream>
using namespace std;
int plu(int x,int y,int z) {
	if(y==1)
		return x;
	else if(y==2)
		return 0;
	else if(y==3)
		return x;
	else if(y==4)
		return z;
	else if(y>=5)
		return (plu(x,y-1,z)+plu(x,y-2,z));
}
int main() {
	int a,n,m,x,sum=0,i,j,l;
	cin >> a >> n >> m >> x;
	for(l=1;; l++) {
		sum=0;
		for(i=1; i<n; i++) {
			sum+=plu(a,i,l);
		}
		if(sum==m)break;
	}
	sum=0;
	for(i=1; i<=x; i++) {
		sum+=plu(a,i,l);
	}
	cout << sum << endl;
	return 0;
}