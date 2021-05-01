#include<iostream>
#include<cstdio>
using namespace std;
int n,ans,t;
int a[7],m=1;
int c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[111110];
int main()
{
    cin >> n;
    b[++t]=6;
    for(int i = 1900; i <= n+1900-1; i++)
     {
        m = 12;
        if(i%400==0 || (i%4==0 && i%100!=0))
         for(int j=1;j<=12;j++)
          {
            t++;
            b[t]=(b[t-1]+c[j])%7;
          }
        else for(int j=1; j<=12; j++)
          {
                t++;
                b[t]=(b[t-1]+d[j])%7;
          }
     }
    for(int i=1; i<t; i++) 
	   a[b[i]]++;
    cout << a[6];
    for(int i=0; i<=5; i++) 
	   cout << " " << a[i];
    return 0;
}