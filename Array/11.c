#include <stdio.h>

int main()
{
    int input,i;
    scanf("%d",&input);
    int input_number[input],A[input],B[input];

    for ( i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);
        A[i]=input_number[i];
        B[input-1-i]=input_number[i];
    }
    printf("Array A :");
    for ( i = 0; i < input; i++)
    {
        printf(" %d",A[i]);
    }
    printf("\nArray B :");
    for ( i = 0; i < input; i++)
    {
        printf(" %d",B[i]);
    }
    return 0;
}
