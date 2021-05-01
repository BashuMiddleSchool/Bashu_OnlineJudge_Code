#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main () {
	int n;
	cin >> n;
	if(n<100) cout << 10;
	else if(n<110&&n>=100) cout <<30;
		else if(n<120&&n>=110) cout << 50 ;
			else if(n<130&&n>=120) cout << 70 ;
				else if(n>=130) cout << 80 ; 
	return 0;
}