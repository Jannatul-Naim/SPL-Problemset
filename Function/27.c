#include <stdio.h>
#define C 1000
void Show_Converted_Number(int array[C], int n)
{
    while (n--)
        printf("%d", array[n]);
}
int Convert_Number(int n, int base, int num[C])
{
    int i;
    for (i = 0; n != 0; i++)
    {
        num[i] = n % base;
        n = n / base;
    }
    return i;
}

void Get_Number_And_Base(int *n, int *b)
{
    scanf("%d %d", n, b);
}

int main()
{
    int N, B, output[N];
    Get_Number_And_Base(&N, &B);

    if (B >= 2 && B <= 16)
    {
        int n = Convert_Number(N, B, output);
        Show_Converted_Number(output, n);
    }
    else
        printf("Base not within proper range!");

    return 0;
}