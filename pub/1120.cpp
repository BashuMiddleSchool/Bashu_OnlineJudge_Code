//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/15.
//

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int f(long long i,long long j) {
    int k,p;
    for(k=0;i!=0;k++)
    i=i/10;
    for(p=0;j!=0;p++)
    j=j/10;
    if(k<p)k=p;
    return k;
}
int main()
{
    int x,s=1000;
    long long n,j,i;
    cin >> n;
    for(i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
        j=n/i;
        x=f(i,j);
        s=min(s,x);
        }
    }
    cout << s << "\n";
    return 0;
}
