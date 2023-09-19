#include <stdio.h>

int main()
{
    int input,sum=0,position,i;
    scanf("%d",&input);
    int input_number[input];

    for (i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);
    }
    printf("position:");
    scanf("%d",&position);
    for ( i = 0; i <position ; i++)
    {
        printf("%d ",input_number[i]);
    }

    for ( i = position+1; i < input; i++)
    {
        printf("%d ",input_number[i]);
    }

    return 0;
}
