#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int rem = (input / 2) + 1;
    int temp = input - 1;
    int temp2 = 2;

    for (int i = 1; i < rem; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            if (j == rem || j+i==rem+1 || j-i==rem-1)
                printf("$");
            else
                printf("_");
        }
        printf("\n");
    }

    for (int j = 1; j <= input; j++)
        printf("$");
    printf("\n");

    for (int i = 1; i < rem; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            if (temp2 == j || temp == j || i == rem || j == rem)
                printf("$");
            else
                printf("_");
        }
        temp--;
        temp2++;
        printf("\n");
    }

    return 0;
}
