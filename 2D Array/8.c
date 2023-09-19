#include<stdio.h>

int main(){
    int m,n,tempi=0,tempj=0,max=0,i,j;
    scanf("%d %d",&m,&n);
    int array[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            if(array[i][j]>max){
                max=array[i][j];
                tempi=i;
                tempj=j;
            }
    }
    printf("Max: %d\nLocation: [%d][%d]",max,tempi,tempj);
return 0;
}
