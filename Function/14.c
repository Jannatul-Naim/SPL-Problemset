#include <stdio.h>
#define N 1000
void input(int arr[N])
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}

int main()
{
    int array[N];
    input(array);
}
