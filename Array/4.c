#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    float input_number[input],sum=0;

    for ( int i = 0; i < input; i++)
    {
        scanf("%f",&input_number[i]);
        sum+=input_number[i];
    }

    printf("%.2f ",sum/input);

    return 0;
}
