#include<bits/stdc++.h>
using namespace std;
long long a[30001];
int w[26]={0},v[26]={0};
int main() {
    memset(a,0,sizeof(a));
    int n,m;
    scanf("%d%d",&m,&n);
    for (int i=1;i<=n;i++){
        scanf("%d%d",&w[i],&v[i]);
        for (int j=m;j>=0;j--){
            if (j-w[i]>=0) a[j]=max(a[j],a[j-w[i]]+v[i]*w[i]);
        }
    }
    printf("%d",a[m]);
    return 0;
}