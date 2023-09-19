#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int input_number[input];

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number[input-i-1]);
    }
    for ( int i = 0; i <input; i++)
    {
        printf("%d ",input_number[i]);
    }

    return 0;
}
