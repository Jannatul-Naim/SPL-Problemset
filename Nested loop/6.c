#include <stdio.h>

int main()
{

    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
