#include <stdio.h>

int main()
{
    int number,temp,original_number,reverse_number=0;

    scanf("%d",&number);
    original_number=number;

    while(number!=0)
    {
        temp=number%10;
        reverse_number=reverse_number*10+temp;
        number/=10;
    }
    if(reverse_number==original_number)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
