#include <bits/stdc++.h> 
#define wid 133
#define WAY 20
using namespace std;
bool vis[3][wid]={0};
int path[20];
int t,now,n;
int ans;
void dfs( int p )
{
    int i,j;
    if( p==n )
    {
        now++;
        ans++;
        if( now<=3 )
        {
            for( i=0;i<n-1;i++ )
                printf("%d ",path[i]+1);
            printf("%d\n",path[i]+1);
        }
    }
    else
    {
        for( i=0;i<n;i++ )
        {
            if( !vis[0][i]&&!vis[1][p+i]&&!vis[2][p-i+n] )
            {
                t++;
                path[t]=i;
                vis[0][i]=vis[1][p+i]=vis[2][p-i+n]=1;
                dfs(p+1);
                t--;
                vis[0][i]=vis[1][p+i]=vis[2][p-i+n]=0;
            }
        }
    }
}
int main()
{
    t=-1,now=0,ans=0;
    scanf("%d",&n);
    dfs(0);
    printf("%d\n",ans);
    return 0;
}