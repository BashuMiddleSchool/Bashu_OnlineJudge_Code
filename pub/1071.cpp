//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){	
	int n,t,i;
	int a[3000],b[3000];
	cin>>n;
	if(n==1)
	{
		cout<<"Jolly";
		return 0;
	}
	for(i = 0;i < n;i++)
		cin>>a[i];	
	for(i = 0;i < n-1;i++)
		b[i]=abs(a[i]-a[i+1]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=0;i<n-2;i++)
	{
		if(abs(b[i]-b[i+1])!=1)
		{
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
	return 0;
}
