#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,x,y=0,z=0,m=0,maxa=-1,maxb=-1,l=0,ck=0;
	cin >> a;
	int b[a],c[a];
	for(x=0; x<a; x++) {
		cin >> b[x];
		y+=b[x];
		if(b[x]>maxa)
			maxa=b[x];
	}
	for(x=0; x<a; x++) {
		cin >> c[x];
		y+=c[x];
		if(c[x]>maxb)
			maxb=c[x];
	}
	for(x=0; x<a; x++)
		if(b[x]==maxa)
			z++;
	for(x=0; x<a; x++)
		if(c[x]==maxb)
			m++;
	if(z>m)
		z=m;
	l=y/a;
	ck=maxa+maxb;
	cout << l << "\n" <<ck << "\n" << z;
	return 0;
}
