#include<iostream>
using namespace std;
int main() {
	int n,a[100],i,x,hex=0,t=0,m,j;
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i];
	cin>>x;
	for(i=1;i<=n;i++)
	if(x==a[i]){hex=1;t=i;break;}
	if(hex==1)
	{for(j=t;j<=n-1;j++)a[j]=a[j+1];
	n--;
	}
	if(hex==0){ 
	if(x<a[1])t=1;
	else if(x>a[n])t=n+1;
	else for(j=1;j<=n;j++)
		if(x>a[j]&&x<a[j+1]){t=j+1;break;}
	for(j=n;j>=t;j--){
		a[j+1]=a[j];
		}
	a[t]=x;
	n++;
	}
	for(i=1;i<=n;i++)cout<<a[i]<<" ";
} 