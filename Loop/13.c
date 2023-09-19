#include <stdio.h>

int main()
{
    int i,n,fac=1;

    scanf("%d",&n);
    printf("%d! = ",n);

    for(i=n; i>=1; i--)
    {
        if(i==1)
        {
            printf(" 1");
        }
        else
        {
            printf(" %d X",i);
            fac*=i;
        }
    }
    printf(" = %d\n",fac);

    return 0;
}
