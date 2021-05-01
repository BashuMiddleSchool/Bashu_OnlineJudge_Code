#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x,a,b,c,d;
    cin >> x>>a>>b>>c>>d;
    cout << fixed<<setprecision(7)<<x*x*x*a+x*x*b+x*c+d << endl;
    return 0;
}