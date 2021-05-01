//混合语言awa¢
#include<iostream>
#include<iomanip>
#include<cmath>
#include <stdio.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (b > c) {
            printf("%d\n", a);
        } else {
            if (a > c)
                printf("%d\n", a);
            else
                printf("%d\n", c);
        }
    } else {
        if (b > c) {
            if (a > c)
                printf("%d\n", b);
            else
                cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}