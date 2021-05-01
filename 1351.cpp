#include<bits/stdc++.h>
#define MAXN 1000 
using namespace std;
long long ll;
const int N = 1010011;
const int INF = 0x3f3f3f3f;
string a[N],str;
int dp[N];
bool check(int m, int j,int n)
{
    for (int i = m, k = n;k >= 0;k--, i--)
    {
        if (a[j][k] != str[i])
		            return false;
    }
    return true;
}
int main()
{
    cin >> str;
    int len, i, n;
    len = str.size();
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    memset(dp, INF, sizeof(dp));
    dp[0] = 0;
    for (i = 0;i < len;i++)
    {
        int k = i + 1;
        for (int j = 0;j < n;j++)
        {
            int len1 = a[j].size();
            if (len1 > k) 
			continue;
            else {
                
                    if (check(i, j, len1 - 1))  
                    dp[k] = min(dp[k], dp[k - a[j].size()] + 1);
                }
            }
        }
    cout << dp[len] << endl;
    return 0;
}
