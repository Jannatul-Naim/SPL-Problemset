#include <stdio.h>

int ScalarMultiply(int array[3][5], int n)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            array[i][j] *= n;
        }
    }
}

void ShowMatrix(int array[3][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int array[3][5])
{

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d ", &array[i][j]);
        }
    }
}

int main()
{
    int array[3][5], n;

    // int *a;
    inputMatrix(array);
    scanf("%d", &n);
    printf("Original:\n");
    ShowMatrix(array);
    printf("Multiplied by %d:\n", n);
    ScalarMultiply(array, n);
    ShowMatrix(array);
}
