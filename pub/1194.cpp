#include<iostream>
using namespace std;
int main()
{
    int apple[10];
    int high,num=0;
    for(int i=0;i<10;i++)
    cin>>apple[i];
    cin>>high;
    high=high+30;
    for(int i=0;i<10;i++)
    if(high>=apple[i]){num++;}
    cout<<num;
    return 0;
}