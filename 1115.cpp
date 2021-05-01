//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/20.
// 不是，我在Xcode上编译真过了的｜（万恶（？

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAX=1001;
int n;
struct node
{
    int a,b,mn,no;
}sz[MAX];
int px[MAX];
bool cmp(node x,node y)
{
    return x.mn<y.mn;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;++i) {
    scanf("%d",&sz[i].a);
    sz[i].no=i;
    }
    for(int i=1;i<=n;++i) {
        scanf("%d",&sz[i].b);
        sz[i].mn=min(sz[i].a,sz[i].b);
    }
    sort(sz+1,sz+1+n,cmp);
    int l=0,r=n+1;
    int ansl=0,ansr=0;
    for(int i=1;i<=n;++i)
    {
        ansl+=sz[i].a;ansr+=sz[i].b;
        if(sz[i].mn==sz[i].a)
        {
            px[++l]=sz[i].no;
            if(l==1)ansr+=sz[i].a;
        }
        else
        {
            px[--r]=sz[i].no;
            if(r==n)ansl+=sz[i].b;
        }
    }
    printf("%d\n",max(ansl,ansr));
    for(int i=1;i<=n;++i)
    printf("%d ",px[i]);
    return 0;
}
