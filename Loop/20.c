#include<stdio.h>

int main()
{
    int i,n,rem=0,sum=0;

    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        rem=rem*10+i;
        sum+=rem;
    }
    printf("%d",sum);

    return 0;
}
