#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d,mm,n,m,jj,x,y,w,t,f,zx,fm,fz,j;
	cin>>a>>b;
	cin>>c>>d;
	mm=b*d;
	y=mm;
	m=a*d+c*b;
	x=m;
	while (mm!=0) {
		jj=m%mm;
		m=mm;
		mm=jj;
		}
	if(x>y) {
			{
			w=x/y;
			t=x-w*y;
			fz=t;
			fm=y;
			}
		while(t!=0) {
			f=y%t;
			y=t;
			t=f;
			}
		j=y;
		zx=j;
		cout<<w<<"+"<<fz/y<<"/"<<fm/j;
		}
	if(x==y)
		cout<<1;
	if(x<y)
		cout<<x/m<<"/"<<y/m;


	}