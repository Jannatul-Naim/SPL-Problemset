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
        else
        {
            printf(", %d",i*2-1);
        }
    }

    return 0;
}

