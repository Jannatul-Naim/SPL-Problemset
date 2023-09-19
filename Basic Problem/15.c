
/*C program to check number is perfect square or not.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int i;
    float f;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    f=sqrt(num);
    i=f;

    if(i==f)
        printf("Perfect square",num);
    else
        printf("Not a perfect square.",num);

    return 0;
}
