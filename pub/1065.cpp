
#include <iostream> 
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
    int a[11],i,h,b = 0 ;
    for(int i=1;i<=10;i++) cin>>a[i];
    cin>>h;
    for(i=1;i<=10;i++)
         if(h+30>=a[i]) b++;
    cout << b;
    return 0;
}