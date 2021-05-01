#include <bits/stdc++.h>
using namespace std;
int sep(int n,int m) {
    int x=1;
    if(n==1) return 0;
    for(int i=m;i*i<=n;i++) {
        if(n%i==0) x+=sep(n/i,i);
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        int a;
        cin>>a;
        printf("%d\n",sep(a,2));
    }     
    return 0;
}