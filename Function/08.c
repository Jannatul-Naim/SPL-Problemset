#include <stdio.h>
#define N 1000

void Calculate(int n, int array[N])
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main()
{
    int n, array[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    Calculate(n, array);
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
