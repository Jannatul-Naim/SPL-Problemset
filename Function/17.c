#include <stdio.h>
#define N 1000
int input(int arr[N])
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return i;
}
void shortingFUN(int array[N], int n)
{
    while (--n)

    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void output(int array[N], int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", array[i]);
}

int main()
{
    int array[N];
    int count = input(array);
    shortingFUN(array, count);
    output(array, count);
    return 0;
}