#include<stdio.h>

int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int input_arr[m][n];
    int output_row_arr[m*n];
    int output_col_arr[m*n];

    for( i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d",&input_arr[i][j]);
    }
    printf("\nRow-wise: ");
    for( i=0; i<m; i++)  {
        for(j=0; j<n; j++)
            printf("%d ",input_arr[i][j]);
    }
    printf("\nColumn-wise: ");
    for( i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",input_arr[j][i]);
        }
    }
    return 0;
}
