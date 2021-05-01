//lijunhao. All Rights Reserved
#include<bits/stdc++.h>
#define MAX 65
using namespace std;
int N,m,oper = 0;
int v[MAX],p[MAX],q[MAX];
int c[MAX][MAX]={0},w[MAX][MAX]={0},d[32005]={0};
int find(int nn,int kk)
{
    for(int i = kk;i <= m;i++)
      if(q[i] == nn)
         return i;
    return 0;
}
void dfs(int now,int ii,int zhong,int cost)        //物品组数 
{
    int t=find(now,ii+1);
    if(!t)
    {
       c[oper][0]++;
       w[oper][0]++;
       c[oper][c[oper][0]]=cost;
       w[oper][w[oper][0]]=zhong;
    	return ;
    }
    dfs(now,t,zhong,cost);
    dfs(now,t,zhong+v[t]*p[t],cost+v[t]);
}
void init()
{
    cin >> N >> m;
    for(int i=1;i<=m;i++)
      q[i]=0;
    for(int i=1;i<=m;i++)
    {
       scanf("%ld%ld%ld",&v[i],&p[i],&q[i]);
       //cout << v[i];
    }
    for(int i=1;i<=m;i++)
    {
       c[i][0]=0;
       w[i][0]=0;
    }
    for(int i=1;i<=m;i++)
      if(q[i]==0)
      {
         oper++;
         dfs(i,0,v[i]*p[i],v[i]);
      }
}
void dp()
{
    int k,i,j;
    for(k=1;k<=oper;k++)
      for(j=N;j>=0;j--)
        for(i=1;i<=c[k][0];i++)
          if(j>=c[k][i])
            d[j]=max(d[j],d[j-c[k][i]]+w[k][i]);
}
int write()
{
    int i,ans=0;
    for(i=0;i<=N;i++) {
        ans=max(ans,d[i]);
    }
    printf("%ld\n",ans);
    return 0;
}
int main()
{
    init();
    dp();
    write();
	return 0;
}
