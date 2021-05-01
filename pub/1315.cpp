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

long long power(int a, int b, int c)
{
    long long ans = 1,aa = a;
    aa = aa%c;
    while(b){
        if(b & 1) ans = (ans*aa)%c;
        b >>= 1;
        aa = (aa*aa) %c;
    }
    return ans;
}

int main()
{
    int a,n,p;
    cin >> a >> n >> p;
    cout << power(a,n,p) << endl;
    return  0;
}
