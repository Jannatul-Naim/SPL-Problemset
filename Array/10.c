#include <stdio.h>

int main()
{
    int n,search_num,temp=0,i;
    scanf("%d",&n);
    int input_number[n];

    for (  i = 0; i < n; i++)
    {
        scanf("%d",&input_number[i]);
    }
    scanf("%d",&search_num);

    for ( i = 0; i < n; i++)
    {
        if(search_num==input_number[i])
        {
            if (temp==0)
            {
                printf("FOUND at index position: %d",i);
                temp++;
            }
            else
            {
                printf(", %d",i);
                temp ++;
            }

        }
    }
    if (temp==0)
    {
        printf("NOT FOUND.");
    }

    return 0;
}
