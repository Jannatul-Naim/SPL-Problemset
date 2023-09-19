#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    int B[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }

    int result[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                temp = 1;
                break;
            }
        }

        if (temp==0)
        {
            result[k] = A[i];
            k++;
        }
    }

    if (k == 0)
    {
        printf("All are same");
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d ", result[i]);
        }
    }

    return 0;
}
