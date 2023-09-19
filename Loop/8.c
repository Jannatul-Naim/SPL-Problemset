#include <stdio.h>
int main()
{
    int n,rem=0,temp;
    scanf("%d",&n);

    while(n!=0)
    {
        temp=n%10;
        rem= rem*10+temp;
        n/=10;
    }
    printf("%d",rem);
    return 0;
}
