#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int input_number[input],sum=0;

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);

        if (i%2==1)
        {
            input_number[i]=0;
        }

    }
    for ( int i = 0; i < input; i++)
        printf("%d ",input_number[i]);

    return 0;
}
