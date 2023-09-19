#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = 1; j <= 2 * (n - i)-1; j++)
        {
            printf("_");
        }
        for (j = i; j >= 1; j--)
        {
            if (i==n && j==n)
            {
                continue;
            }
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
