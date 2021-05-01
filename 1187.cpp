//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/28.
//

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#define rep(a,c) for (int a=1;a<=c;a++)
#define N 51000
using namespace std;
int n,w,a[30001],pigu=0,head,sum=0;
int main() {
    cin >> w >> n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    head = n-1;
    while(pigu <= head) {
        if(a[head]+a[pigu]>w) {
            sum++;
            head--;
        } else {
            pigu++;
            head--;
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
