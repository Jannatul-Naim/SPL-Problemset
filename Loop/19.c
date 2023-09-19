#include <stdio.h>
#include <math.h>

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
    int i,n,x;
    float sum=0;

    scanf("%d",&x);

    //i<=6 according to the sample output
    for(i=1; i<=6; i++)
    {
        if(i%2==1)
        {
            sum=sum+((pow(x,(2*i-1)))/fact(2*i-1));
        }
        else
        {
            sum=sum-((pow(x,(2*i-1)))/fact(2*i-1));
        }
    }
    printf("%.3f\n",sum);



    return 0;
}

