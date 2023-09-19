
#include <stdio.h>

int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    int array[n][n];
    int major_diagonal[n];
    int minor_diagonal[n];
    int temp1=0;
    int temp2=0;


    for( i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d",&array[i][j]);
    }
    for( i=0; i<n; i++){
        for(j=0; j<n; j++)
        {
            if(i==j){
                major_diagonal[temp1]=array[i][j];
                temp1++;
            }
            if (i+j==n-1){
                minor_diagonal[temp2]=array[i][j];
                temp2++;
            }
        }
    }
    printf("\nMajor diagonal: ");
    for( i=0; i<n; i++)
        printf("%d ",major_diagonal[i]);

    printf("\nMinor diagonal: ");
    for( i=0; i<n; i++)
        printf("%d ",minor_diagonal[i]);

    return 0;
}
