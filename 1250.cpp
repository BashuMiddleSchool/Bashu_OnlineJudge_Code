//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/18.
//

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int a[1000001],n,k[10005];
int main()
{
    int avail = 0;
    cin >> n;
    a[1]=1;
    a[2]=2;
    for(int i=1;i<=n;i++)
    {
        cin >> k[i];
        if(k[i]>avail)avail=k[i];
    }
    for(int i=3;i<=avail;i++)
    {
        a[i]=(2*a[i-1]+a[i-2])%32767;
    }
    for(int i=1;i<=n;i++)
    {
        (cout << a[k[i]]) << "\n";
    }
    return 0;
}
