#include <stdio.h>

int main(){

    int i,j,input;

    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
       for ( j = 1; j <= input-i; j++)
    {
       printf("_");
    }
    for ( j = 1; j <=i*2-1; j++)
    {
       printf("*");
    }
    printf("\n");
    }


    return 0;
}