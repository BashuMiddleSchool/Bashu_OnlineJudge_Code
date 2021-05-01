#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, end, count, i;
    scanf("%d", &n);
    count = 0;
    end = sqrt(n);
    for(i=1; i<=end; i++)
        if(n % i == 0)
            count += 2;
    if(end * end == n)
        count -= 1;
    printf("%d\n", count);
    return 0;
}