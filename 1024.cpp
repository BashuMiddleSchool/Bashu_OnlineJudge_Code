#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x>0) cout << x+1 << endl;
    if(x==0) cout << x << endl;
    if(x<0) cout << x-1 << endl;
    return 0;
}

