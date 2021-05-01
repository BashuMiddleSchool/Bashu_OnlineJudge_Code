#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=1000010;
int a,n,head1,head2,tail,q[maxn];
int main()
{
    while(scanf("%d%d",&a,&n)>0)
    {
        head1=head2=1;
        tail=1;
        q[head1]=a;
        while(tail<n)
        {
            int x=q[head1]*2+1,y=q[head2]*3+1;
            if(x<y)
            {
                q[++tail]=x;
                head1++;
            }
            else
            {
                if(y<x)
                {
                    q[++tail]=y;
                    head2++;
                }
                else
                {
                    q[++tail]=x;
                    head1++;
                    head2++;
                }
            }
        }
        printf("%d\n",q[tail]);
    }
    return 0;
}