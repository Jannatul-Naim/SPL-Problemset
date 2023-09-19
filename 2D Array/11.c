#include <stdio.h>

    int main(){
    int n,i,j;
    scanf("%d",&n);
    int array[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(i%2==1)
                sum+=array[i][j];
            else{
                if(j%2==1)
                    sum+=array[i][j];
            }

    }

    printf("%d",sum);

    return 0;
    }
