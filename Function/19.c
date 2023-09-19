#include <stdio.h>
#define N 1000
int IsPrime(int n)
{
    int flag;
    flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag++;
            break;
        }
    }
    return flag;
}
int GeneratePrime(int n, int array[100])
{
    int index = 0;
    int count = 2;

    while (n > count)
    {
        if (!IsPrime(count))
        {
            array[index] = count;
            index++;
        }
        count++;
    }
    if (n <= 2)
    {
        return 0;
    }
    else
        return index;
}

void ShowMatrix(int array[N], int n, int input)
{
    printf("Prime less than %d: ", input);
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(", %d", array[i]);
    }
}
int main()
{
    int input, array[N];
    scanf("%d", &input);
    int n = GeneratePrime(input, array);
    ShowMatrix(array, n, input);
    return 0;
}