#include <stdio.h>

int main()
{
    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
        for ( j = 1; j <= input; j++)
        {
            if (i%2==1)
            {
                printf("*");
            }
            else
            {
                if (j==1||j==input)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
