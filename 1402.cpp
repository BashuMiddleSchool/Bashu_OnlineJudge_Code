#include<bits/stdc++.h>
using namespace std;
int gg[10000],wogg[10000],t1=1,t2=1,w1,w2,k1,k,m,w;
int main()
{
    cin>>m>>w>>k;
    for(int i=1;i<=m;i++)
      gg[i]=i;
    for(int i=1;i<=w;i++)
      wogg[i]=i;
    w1=m;w2=w;
    while(k1<k) 
    {
        cout<< gg[t1] << ' ' << wogg[t2] << endl;
        w1++;gg[w1]=gg[t1];t1++;  
        w2++;wogg[w2]=wogg[t2];t2++;
        k1++;
    }
    return 0;
}