#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
const int N = 20;
const int xx[2] = {0,-1} , yy[2] = {-1,0};
int f[N][N][N][N],a[N][N];
int x,y,z,nx1,nx2,ny1,ny2,n;
int main() {
	cin >> n;
	cin >> x >> y >> z;
	while(x) {
		a[x][y]=z;
		cin >> x >> y >> z;
	}
	for(int x1=1;x1<=n;++x1) {
		for(int y1=1;y1<=n;++y1) {
			for(int x2=1;x2<=n;++x2) {
		for(int y2=1;y2<=n;++y2) {
			for(int i=0;i<2;++i)
		for(int j=0;j<2;++j) {
			nx1=x1+xx[i];
			ny1=y1+yy[i];
			nx2=x2+xx[j];
			ny2=y2+yy[j];
			f[x1][y1][x2][y2] = max(f[x1][y1][x2][y2],f[nx1][ny1][nx2][ny2]);
		}
		f[x1][y1][x2][y2] +=a[x1][y1] + a[x2][y2];
		if(x1==x2 && y1 == y2) 
		f[x1][y2][x2][y2] -= a[x2][y2];
	}
	}
	}
	}
	cout << f[n][n][n][n];
	return 0; 
}
