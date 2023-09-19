#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("1");
        }
        else if(i%2==0)
        {
            printf(", 0");
        }
        else
        {
            printf(", 1");
        }
    }
    return 0;
}

