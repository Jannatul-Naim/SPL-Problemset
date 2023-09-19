#include <stdio.h>

int GenNthPrime(int n)
{
    int prime = 1;
    int PrimeCount = 0;
    int flag;

    while (n != PrimeCount)
    {
        flag = 0;
        prime++;
        for (int i = 2; i < prime; i++)
        {
            if (prime % i == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            PrimeCount++;
        }
    }
    return prime;
}

int main()
{
    int input;
    scanf("%d", &input);
    int output = GenNthPrime(input);
    printf("%dth Prime: %d\n", input, output);
}