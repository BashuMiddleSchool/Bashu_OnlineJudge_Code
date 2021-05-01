#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int  maxn = 0, x; 
        double sum=0;
        for(int i = 1; i <= n; ++ i)
        {
            scanf("%d", &x);
            maxn = max(maxn, x);
            sum += x;
        }
        double sum2 = sum-maxn;
        if(sum2 <= maxn)
            printf("%.1f\n", sum2);
        else printf("%.1f\n", (sum/2.0));
    }
    return 0;
}
