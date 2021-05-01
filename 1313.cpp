//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
using namespace std;
long long GetMaxNum(long long arr[],long long n)//最大值函数
{
	long long result=arr[0];
	for(long long i=1; i<n; i++) {
		if(result<arr[i]) {
			result=arr[i];
		}
	}
	return result;
}
long long GetMinNum(long long arr[],long long n)//最小值函数
{
	long long result=arr[0];
	for(long long i=1; i<n; i++) {
		if(result>arr[i]) {
			result=arr[i];
		}
	}
	return result;
}
int main()
{
	long long m;
	cin >> m;
	long long a[100005];
	for(int i=0;i<m;i++) {
		cin >> a[i];
	}
	cout<<GetMaxNum(a,m)<<' ';
	cout<<GetMinNum(a,m)<<endl;
	cin.get();
}