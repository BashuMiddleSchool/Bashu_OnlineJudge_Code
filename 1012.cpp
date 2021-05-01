#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{    
     double Xa, Ya, Xb, Yb;    
     cin >> Xa >> Ya >> Xb >> Yb;    
     cout << fixed << setprecision(3) << sqrt(pow((Xa-Xb),2)+pow((Ya-Yb),2));    
     return 0;
}