#include <stdio.h>

int main()
{
    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
        for ( j = 0; j <i; j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }

    return 0;
}
