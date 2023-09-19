#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int input_number1[input],input_number2[input];

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number1[i]);
    }
    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number2[i]);
    }
    for ( int i = 0; i < input; i++)
    {
        printf("%d ",input_number1[i]+input_number2[i]);
    }

    return 0;
}
