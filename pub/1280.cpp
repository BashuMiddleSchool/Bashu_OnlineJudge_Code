//懂啦
//next_permutation产生全排列，学费了
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i=1;
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		cout<<i<<":";
		cout << s << endl;
		i++;
	} while (next_permutation(s.begin(), s.end()));
	return 0;
}
