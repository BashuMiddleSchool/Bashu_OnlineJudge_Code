#include<bits/stdc++.h>
using namespace std;
long long long_mod(string x, long long y){   //universal example
    int cnt = 1, status = 0;
    if(x[0] == '-'){
        cnt = -1;  status++;
    }
    long long r = x[status++] - 48;
    while(status < x.length()){
        r = (r*10 + x[status]-48) % y;
        status++;
    }
    return r*cnt;
}

int main() {
	string n;
	cin >> n;
	cout << long_mod(n,7);
	return 0;
}