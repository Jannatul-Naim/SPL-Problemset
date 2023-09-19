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

    char str [N];
    int count;
    char OC;
    int big=0;

    gets(str);
    int n = len(str);

    for (int i = 'A'; i<'Z'; i++)
    {   count=0;
        for (int j = 0; j < n; j++)
        {
            if (str[j]==i)
            {
                count++;
            }            
        }
        if(count>big){
            big=count;
            OC=i;
        }      
    }
    printf("%c(or %c)",OC,OC+32);
  
return 0;
        
}