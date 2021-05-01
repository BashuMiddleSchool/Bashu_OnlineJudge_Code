#include<bits/stdc++.h>;
using namespace std;
int a[10000],n,m,c,e=0;
int main() {
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
    cin>>c;
    a[i]+=c;
    }
    for(int i=1;i<9999;i++) {
        if(a[i]!=0)
            e++;
        if(e==m) {
            e=0;
            m=a[i];
            cout<<i<<' ';
            a[i]=0;
            n--;
        }
        if(i==9998&&n!=0)
            i=0;
    }
    return 0;
}