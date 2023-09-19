#include <stdio.h>

int main()
{
    int i,j,input,temp;
    scanf("%d",&input);
    temp=(input/2)+1;

    for ( i = 1; i <= input; i++)
    {
        if(i<=temp)
        {
            for ( j = 0; j <temp-i; j++)
            {
                printf("_");
            }
            for ( j = 1; j <=i*2-1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for ( j = 1; j <=i-temp; j++)
            {
                printf("_");
            }
            for ( j = 1; j <=((input-i)*2)+1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
