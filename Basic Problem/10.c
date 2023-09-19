#include<stdio.h>



int main()
{
    int n1, n2;

    scanf("%d %d", &n1,&n2);


    if(n1%n2 == 0)
        printf( "Divisible" );
    else
        printf( "Not Divisible");

    return 0;
}

