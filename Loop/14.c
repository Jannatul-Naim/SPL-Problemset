#include<stdio.h>

int fact(int n)
{
    int i =1;
    while(n!=0)
    {
        i*=n;
        n--;
    }
    return i;
}

int main()
{

    int n,r;
    scanf("%d %d",&n,&r);
    printf("%d",fact(n)/(fact(r)*fact(n-r)));

    return 0;
}
