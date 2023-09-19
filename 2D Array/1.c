#include <stdio.h>

int main()
{
    int i,j;
    int output[3][3];

    for( i=0; i<9; i++)
            scanf("%d",&output[i/3][i%3]);


    for( i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d ",output[i][j]);
        printf("\n");
    }

    return 0;
}

