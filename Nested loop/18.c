#include <stdio.h>

int main(){

    int i,j,input,n;

    scanf("%d",&input);
    n=input/2+1;

    for ( i = 1; i <= input; i++)
    {
       for ( j = 1; j <= input; j++){
        if (j==1 || j==input || i==n)
        {
            printf("H");
        }
        else printf(" ");

       }

    printf("\n");
    }


    return 0;
}
