#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int c,m;
    cin>>c>>m;
    if( (c>=60&&m<60)||(m>=60&&c<60) ) 
    cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}