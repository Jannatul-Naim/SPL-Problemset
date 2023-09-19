#include<stdio.h>
    int main(){
        int m,n,sum=0;
        scanf("%d %d",&m,&n);
        int array[m][n];

        for (int j = 0; j < m; j++){
            for ( int i = 0; i < n; i++){
                scanf("%d",&array[j][i]);
                sum+=array[j][i];
            }           
        }
        printf("%d",sum);
        return 0;      
    }