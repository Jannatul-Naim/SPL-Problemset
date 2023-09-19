#include<stdio.h>

int main(){
     int n,i,j,temp=0;
    scanf("%d",&n);
    int array[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    }

    for(i=1;i<n;i++){
        for(j=0;j<i;j++)
            if(array[i][j]!=array[j][i]){
                temp++;
                break;
            }
    }
    if(temp==0)
        printf("Yes");
    else
        printf("No");
    }
