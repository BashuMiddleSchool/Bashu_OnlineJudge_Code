#include<stdio.h>
int main()
{
    int a,b,i,j;
    int k;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k = 0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                k++;
        }
        if(k==0&&i!=1){
            printf("%d ", i);
        }
    }
    return 0;
}