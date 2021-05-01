//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/27.
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
#define rep(a,c) for (int a=1;a<=c;a++)
#define N 51000
using namespace std;
bool vis[N];
int n,m,x,y,z,tot;
int c[N],num[N],head[N];
double ans,mid,l,r,w[N],dis[N];

struct Edge {
    int to,dis,next;
} e[N];

void add(int x,int y,int z) {
    e[++tot].to=y;
    e[tot].dis=z;
    e[tot].next=head[x];
    head[x]=tot;
}

int read() {
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9') {
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9') {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}

bool spfa(int x) {
    vis[x]=true;
    for(int i=head[x]; i; i=e[i].next) {
        int t=e[i].to;
        if(dis[t]>dis[x]+w[i]) {
            dis[t]=dis[x]+w[i];
            if(vis[t]||spfa(t)) {
                vis[x]=false;
                return true;
            }
        }
    }
    vis[x]=false;
    return false;
}

bool judge() {
    for(int i=1; i<=n; i++)
        if(spfa(i)) return true;
    return false;
}

int main() {
    n=read();
    m=read();
    for(int i=1; i<=n; i++) c[i]=read();
    for(int i=1; i<=m; i++) {
        x=read();
        y=read();
        z=read();
        add(x,y,z);
    }
    l=0;
    r=20000;
    while(r-l>0.0000001) {
        mid=(l+r)/2;
        for(int i=1; i<=tot; i++) {
            int t=e[i].to;
            w[i]=(double)mid*e[i].dis-c[t];
        }
        if(judge()) {
            ans=mid;
            l=mid;
        } else r=mid;
    }
    printf("%.2lf",ans);
    return 0;
}
