#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int input_number[input],max=0,min=2147483647,index_max,index_min;

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);
        if(input_number[i]>max)
        {
            max=input_number[i];
            index_max=i;
        }
        if(input_number[i]<min)
        {
            min=input_number[i];
            index_min=i;
        }
    }

    printf("Max: %d,Index: %d\nMin: %d,Index: %d ",max,index_max,min,index_min);


    return 0;
}
