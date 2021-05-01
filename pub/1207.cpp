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
#include <cstring>
int sortt=0,n,k,a[40];
int cnt(int x) {
    int i,y;
    y=sqrt(x);
    for(i=2;i<=y;i++)
        if(x%i==0)
            return 0;
    return 1;
}
void f(int input[],int pos,int m)
{
    if(m==0)
    {
        int j,sum=0;
        for(j=0;j<n;j++)
            if(input[j]==1)
                sum+=a[j];
        if(cnt(sum)==1)
            sortt++;
        return;
    }
    else
    {
        int i;
        for(i=pos;i<n;i++)
        {
            if(input[i]==0)
                input[i]=1;
                f(input,i+1,m-1);
                input[i]=0;
        }
    }
    return;
}
int main()
{
    int input[40],i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    memset(input,0,sizeof(int)*40);
    f(input,0,k);
    printf("%d\n",sortt);
    return 0;
}
