#include <stdio.h>

int IsPrime(int n)
{

    int flag = 1;
    int count = 2;
    if (n == 0 || n == 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag--;
            break;
        }
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int input;
    scanf("%d", &input);
    if (!IsPrime(input))
        printf("Not prime\n");
    else
        printf("Prime\n");

    return 0;
}