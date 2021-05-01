#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=(n-1)%12;
	switch(x) {
		case 0:
			cout<<"Rooster";
			break;
		case 1:
			cout<<"Monkey";
			break;
		case 2:
			cout<<"Ram";
			break;
		case 3:
			cout<<"Horse";
			break;
		case 4:
			cout<<"Snake";
			break;
		case 5:
			cout<<"Dragon";
			break;
		case 6:
			cout<<"Rabbit";
			break;
		case 7:
			cout<<"Tiger";
			break;
		case 8:
			cout<<"Ox";
			break;
		case 9:
			cout<<"Rat";
			break;
		case 10:
			cout<<"Pig";
			break;
		case 11:
			cout<<"Dog";
			break;
		default:break;
	}
	return 0;
}