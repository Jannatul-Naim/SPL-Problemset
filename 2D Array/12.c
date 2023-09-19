#include <stdio.h>

    int main(){
    int m,n,i,j,rem;
    scanf("%d %d",&m,&n);
    int array[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n/2;j++){
            rem=array[i][j];
            array[i][j]=array[i][n-1-j];
            array[i][n-1-j]=rem;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",array[i][j]);
            printf("\n");
    }
    return 0;
    }
