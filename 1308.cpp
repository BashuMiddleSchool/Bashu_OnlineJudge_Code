//我cin和cout都没了啊啊啊啊啊啊啊啊啊qwq 
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int n,b,a[20005],ans;
long long sum;
bool cmp(int x,int y){
    return x>y;
}
int main(){
   	scanf("%d%d",&n,&b);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        sum+=a[i];
        ans=i;
        if(sum>=b){
            printf("%d",ans);
            return 0;
        }
    }
}