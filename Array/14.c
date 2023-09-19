#include <stdio.h>

int main()
{
    int input_A,i,input_B,temp;
    scanf("%d",&input_A);
    int A[1000],B[1000];

    for ( i = 0; i < input_A; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&input_B);
    for ( i = 0; i < input_B; i++)
    {
        scanf("%d",&B[i]);
    }

    for ( i = 0; i < input_A; i++)
    {
        temp=A[i];
        A[i]=B[i];
        B[i]=temp;
    }
    printf("Array A :");
    for ( i = 0; i < input_B; i++)
    {
        printf(" %d",A[i]);
    }
    printf("\nArray B :");
    for ( i = 0; i < input_A; i++)
    {
        printf(" %d",B[i]);
    }


    return 0;
}
