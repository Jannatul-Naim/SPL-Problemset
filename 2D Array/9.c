#include <stdio.h>

int main()
{
    int m,n,sum=0,i,j;
    scanf("%d",&n);
    int array[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d",&array[i][j]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0||i==j||i+j==n-1||i==n-1)
                sum+=array[i][j];
        }
    }

    printf("%d",sum);

    return 0;
}
