//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
int main() {
	int y;
	int m;
	int out;
	cin >> y >> m;
	if(m==4||m==6||m==9||m==11||m==2) {
		if(m==2) {
			if((y%4==0&&y%100!=0)||(y%400==0)) {
				out=29;
			}
			else {
			out = 28;
		}
	}
		else {
		out = 30;
	}
}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) {
		out = 31;
	}
	cout << out;
	return 0;
}