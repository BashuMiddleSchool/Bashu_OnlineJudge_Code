/*【解法】复杂一点的模拟
 1 算出画布的长宽L、K
L = 4n+1+2m
k = max(3*h[i][j]+1+2*(m-i+1));
 2 立方体(i, j)的左下角在画布上的坐标(x, y)
x = k - 2*(m-i)
y = 4*(j-1)+2*(m-i)+1;
 3 写出Draw(i, j)函数 以画布i,j为左下角画一个方格
*/


#include <iostream>
using namespace std;
 
int m, n, k, l;
int h[101][101];
char canvax[1001][1001];
 
const char Block[6][8] = {
	"..+---+",
	"./   /|",
	"+---+ |",
	"|   | +",
	"|   |/.",
	"+---+.."
};
 
void Draw(int x, int y) {
	for(int i=0; i<6; i++)
		for(int j=0; j<7; j++) 
			if(Block[i][j] != '.') 
				canvax[x-5+i][y+j] = Block[i][j];
}
 
int main() {
	cin >> m >> n;
	l = 4*n+1+2*m;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cin >> h[i][j];
			k = max(k, 3*h[i][j]+1+2*(m-i+1));
		}
	}
	for(int i=1; i<=k; i++)
		for(int j=1; j<=l; j++)
			canvax[i][j] = '.';
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++) {
			int x, y;
			x = k - 2*(m-i);
			y = 4*(j-1)+2*(m-i)+1;
			while(h[i][j] > 0) {
				h[i][j] --;
				Draw(x, y);
				x -= 3;
			}
		}
	for(int i=1; i<=k; i++, cout << endl)
		for(int j=1; j<=l; j++)
			cout << canvax[i][j];
	return 0;
}
