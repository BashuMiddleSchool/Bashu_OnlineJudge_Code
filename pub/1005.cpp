#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a ;
    double p =3.1415926;
    cin >> a ;
    cout << fixed << setprecision(2) << 2.0*a*p <<' '<< fixed << setprecision(2) << p*a*a ;
    return 0;
}