#include <stdio.h>

int main()
{
    int i,j,input;
    scanf("%d",&input);

    for ( i = input; i >0; i--)
    {
        for ( j = input; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
