#include <stdio.h>

int main()
{
    int input,sum=0,number,position,i;
    scanf("%d",&input);
    int input_number[input];

    for (i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);
    }
    printf("number:");
    scanf("%d",&number);
    printf("position:");
    scanf("%d",&position);
    for ( i = 0; i <position ; i++)
    {
        printf("%d ",input_number[i]);
    }
    printf("%d ",number);

    for ( i = position; i < input; i++)
    {
        printf("%d ",input_number[i]);
    }

    return 0;
}
