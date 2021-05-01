#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double Bike=50, Walk;
    int n;
    cin >> n;
    Bike += n/3.0;
    Walk = n/1.2;
    if (Bike < Walk) cout << "Bike" << endl;
    else if (Bike > Walk) cout << "Walk" << endl;
    else cout << "All" << endl;
    return 0;
}