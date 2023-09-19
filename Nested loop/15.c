#include <stdio.h>

int main()
{
    int i,j,input;

    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
        for ( j = input; j > 0; j--)
        {
            if (i == j || i==1 || i==input)
            {
                printf("Z");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
