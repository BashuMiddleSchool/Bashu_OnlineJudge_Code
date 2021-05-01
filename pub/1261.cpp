#include<bits/stdc++.h>
using namespace std;
long long z,m=1;
inline long long gcd(long long a,long long b) {           // 最大公约数 
    return b>0 ? gcd(b,a%b):a;
}

int main() {
	long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long p,q;
        scanf("%lld/%lld",&p,&q);
        p*=m;
        m*=q;
        z*=q;
        z+=p;
    }
    long long g=gcd(z,m);
    z/=g;
    m/=g; 
    if(m==1)
        cout<<z;
    else
        cout<<z<<"/"<<m;
    return 0;
}