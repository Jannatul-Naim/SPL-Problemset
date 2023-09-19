#include <stdio.h>

int main()
{
    int i,n,temp,num1,num2;
    num1=1;
    num2=1;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("1");
        }
        else if(i==2)
        {
            printf(", 1");
        }
        else
        {
            temp=num2;
            num2=num2+num1;
            num1=temp;
            printf(", %d",num2);
        }
    }
    return 0;
}

