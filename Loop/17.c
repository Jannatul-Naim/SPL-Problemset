#include<stdio.h>

int main()
{
    int i,n,rem=0;

    scanf("%d",&n);

    for (i=2; i<n; i++)
    {
        if(n%i==0)
        {
            rem++;
            break;
        }
    }
    if(rem==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}

