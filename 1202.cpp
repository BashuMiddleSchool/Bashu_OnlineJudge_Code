#include<bits/stdc++.h>
using namespace std;
string s[100001];
int a[100001],b[100001],a2[100001],b2[100001];
bool check(int x)
{
    int t=s[x].size();
    for(int i=0;i<t;i++)
    if(s[x][i]=='E')return 0;
    return 1;
}
int main()
{
    int n=1,i,j,t=1,t2=1;
    cin>>s[n];
    while(check(n))
    {
        n++;
        cin>>s[n];
    }
    for(i=1;i<=n;i++)
    {
        int sz=s[i].size();
        for(j=0;j<sz;j++)
        {
            if(s[i][j]=='E')
            {
                for(i=1;i<=t;i++)
                cout<<a[i]<<":"<<b[i]<<endl;
                cout<<endl;
                for(i=1;i<=t2;i++)
                cout<<a2[i]<<":"<<b2[i]<<endl;
                return 0;
            }
            if(s[i][j]=='W')
            a[t]++,a2[t2]++;
            else if(s[i][j]=='L')
            b[t]++,b2[t2]++;
            if((a[t]>=11||b[t]>=11)&&abs(a[t]-b[t])>=2)
            {
                t++;
            }
            if((a2[t2]>=21||b2[t2]>=21)&&abs(a2[t2]-b2[t2])>=2)
            {
                t2++;
            }
        }
    }
    return 0;
}