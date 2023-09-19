#include <stdio.h>
int main()
{
    int i,n;
    float temp,sum=0.0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%f",&temp);
        sum+=temp;
    }

    printf("%f",sum/n);

    return 0;
}

