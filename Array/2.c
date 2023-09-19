#include <stdio.h>

int main(){
    int input,sum=0;
    scanf("%d",&input);
    int input_number[input];

    for ( int i = 0; i < input; i++)
    {
        scanf("%d",&input_number[i]);
        sum+=input_number[i];
    }
    
        printf("%d ",sum);
    
return 0;
}
