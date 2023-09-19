#include <stdio.h>

int main(){
     int n,sum=0,i,j,temp;
    scanf("%d",&n);
    temp=n/2;
    int array[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(i==temp||j==temp||(i==0&&j<temp)||(i==n-1&&j>temp)||(j==0&&i>temp)||(j==n-1&&i<temp))
                    sum+=array[i][j];
        }
    }

printf("%d",sum);

return 0;
}

