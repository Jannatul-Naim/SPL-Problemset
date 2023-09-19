#include <stdio.h>

int main(){

    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
       for ( j = i; j <= input ; j++)
    {
       printf("*");
    }
    printf("\n");
    }

    return 0;
}
