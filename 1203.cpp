#include <bits/stdc++.h>
using namespace std;
const int N = 111, M = 15;
int w[N], s[N],f[N][N][M], g[N][N][M];
int mmod(int x,int y)
{
    return (x % y + y) % y;
}
int main()
{
	int m,n;
	int maxium = 0, minium = 0x3f3f3f;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> w[i];  
    }
    for(int i = 1; i <= n; i++) { 
        w[i + n] = w[i]; 
    }
    for(int i = 1; i <= 2 * n; i++)
        s[i] = s[i - 1] + w[i]; 
    	memset(f, 0x2f, sizeof f);
    	memset(g, 0, sizeof g);
    for(int len = 1; len <= n; len++)
        for(int l = 1; l + len - 1 <= n * 2; l++)
        {
            int r = l + len - 1;
            f[l][r][1] = g[l][r][1] = mmod(s[r] - s[l - 1],10);
            for(int k = 2; k <= m; k++)
                for(int j = l + k - 2; j < r; j++)
                {
                    f[l][r][k] = min(f[l][r][k], f[l][j][k - 1] * mmod(s[r] - s[j],10)); // 后面一部分是[j+1,r]
                    g[l][r][k] = max(g[l][r][k], g[l][j][k - 1] * mmod(s[r] - s[j],10));
                }
    }
    for(int i = 1; i < n; i++)
    {
        maxium = max(maxium, g[i][i + n - 1][m]);
        minium = min(minium, f[i][i + n - 1][m]);
    }
    cout << minium << "\n" << maxium;
    return 0;
}