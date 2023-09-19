#include <stdio.h>
#define N 1000

int input(int arr[N])
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    return i;
}

void output(int array[N], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", array[i] * 2);
    }
}

int main()
{
    int array[N];
    int count = input(array);
    output(array, count);
}
