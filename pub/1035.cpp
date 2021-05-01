#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n, age, i;
    double a, sum=0;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> age;
        sum += age;
    }
    a = sum/n;
    cout << fixed << setprecision(2) << a << endl;
    return 0;
}