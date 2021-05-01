#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num;
    int a[105];
    cin >> num;
    for(int j=0;j<num;j++) cin >> a[j];
	sort( a, a + num, less<int>() );  // 排序
    int n = unique(a, a + num) - a;   // 去重
	cout<< n << "\n";
    for ( i = 0; i < n; i++)  // 注意i < n
        cout << a[i] << " ";  // 0 1 5 6 7 8 9
}