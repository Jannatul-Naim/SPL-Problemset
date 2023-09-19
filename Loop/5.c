#include <stdio.h>
int main()
{
    int i,n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        for(i=n1; i>n2; i--)
        {
            printf("%d, ",i*i);
        }
    }
    else if(n2>n1)
    {
        for(i=n1; i<n2; i++)
        {
            printf("%d, ",i*i);
        }
    }

    printf("Reached!");

    return 0;
}

