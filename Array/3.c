#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int input_number[input],sum=0;

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);

        if (input_number[i]%2==0)
        {
            sum+=input_number[i];
        }
    }
    printf("%d ",sum);

    return 0;
}
