#include<stdio.h>
#include <string.h>
#define N 1000

int len (char n[N]){
    int i;
    for ( i = 0; n[i]!=0; i++){
        if(n[i]>='a'&&n[i]<='z')
            n[i]-=32;
    }
    
    return i;
}
int main(){

    char str [N],target;
    int count=0;

    gets(str);
    scanf("%c",&target);
    int n = len(str);
    (target>='a')?target-=32:1;
    for (int i = 0; str[i]!=0; i++)
    {
        if(target==str[i])
            count++;
    }   
    printf("%d",count);
    


    
  
return 0;
        
}