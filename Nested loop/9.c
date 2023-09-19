#include <stdio.h>

int main(){

    int i,j,input;
    scanf("%d",&input);

    for ( i = 1; i <= input; i++)
    {
       for ( j = 1; j <= input; j++)
    {
       if((i%2==1&&j%2==1)||(i%2==0&&j%2==0)){
        printf("1");
       }
        else {
            printf("0");
        }
       }
       printf("\n");
    }

    return 0;
}
