#include <stdio.h>

int main()
{
    int i,j,input;
    scanf("%d",&input);

    for ( i = 0; i <input; i++)
    {
        for ( j = 1; j <= input; j++)
        {
            printf("%d",j+i);
        }
        printf("\n");
    }
    return 0;
}
