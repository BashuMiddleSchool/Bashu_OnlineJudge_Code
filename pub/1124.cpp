#include<iostream>
using namespace std;
int sg(int drug) {
	int a = 0;
	while(drug > 0) {
		a=a+drug % 10;
		drug=drug / 10;
	}
	return a;
}
int main() {
	int m;
	cin >> m;
	while(m >= 10) {
		m = sg(m);
	}
	cout<<m<<endl;
	return 0;
}