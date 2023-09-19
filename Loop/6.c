#include <stdio.h>
int main()
{
    int i,n,x,temp;
    scanf("%d",&x);
    scanf("%d",&n);

    for(i=n; i>0; i--)
    {
        scanf("%d",&temp);
        if(temp==x)
        {
            printf("Right, Player-2 wins!");
            return 0;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n",i-1);
        }
    }
    printf("Player-1 wins!");
    return 0;
}

