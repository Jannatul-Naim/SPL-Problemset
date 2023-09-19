#include <stdio.h>
#define N 1000
int input(int arr[N])
{
    int n, i;
    scanf("%d %d", &n, &arr[0]);
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main()
{
    int array[N];
    printf("Minimum Value: %d", input(array));
}