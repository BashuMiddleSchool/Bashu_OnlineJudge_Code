#include <iostream> 
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int m, n, a, b, c;
    cin >> m >> n;
    a = m;
    b = n;
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    c = (m*n) / a;
    cout << c;
    return 0;
}