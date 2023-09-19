#include <stdio.h>
#define N 100

int ScalarMultiply(int array[N][N], int n, int col, int row)
{
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            array[i][j] *= n;
        }
    }
}

void ShowMatrix(int array[N][N], int col, int row)
{

    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int array[N][N], int col, int row)
{

    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d ", &array[i][j]);
        }
    }
}

int main()
{
    int col, row;
    scanf("%d %d", &col, &row);
    int array[N][N], n;

    inputMatrix(array, col, row);
    scanf("%d", &n);
    printf("Original:\n");
    ShowMatrix(array, col, row);
    printf("Multiplied by %d:\n", n);
    ScalarMultiply(array, n, col, row);
    ShowMatrix(array, col, row);
}
