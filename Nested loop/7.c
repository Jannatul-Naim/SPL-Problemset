#include <stdio.h>

int main(){

    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
       for ( j = 1; j <= input; j++)
    {
       printf("*");
    }
    printf("\n");
    }

    return 0;
}
