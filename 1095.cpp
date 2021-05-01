#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int main() {
    int n,q,x,y,i,j,m;
    cin>>n;
    for(i=1;i<=n;i++) {
        a[i]=0;
        b[i]=i;
    }
    for(j=1;j<=n;j++) {
        if(j<n-2) {
            a[b[j]]=j;
            x=b[j+1];y=b[j+2];
	           for(m=j+1;m<=n-2;m++)
                b[m]=b[m+2];
	               b[n-1]=x;b[n]=y;
        }
        else a[b[j]]=j;
    }
    for(q=1;q<=n;q++)
        cout<<a[q]<<' ';
    return 0;
}
