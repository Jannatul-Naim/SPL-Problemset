#include<stdio.h>
#include<math.h>

int main()
{

    int base,power,ans;
    scanf("%d %d",&base,&power);

    ans=pow(base,power);

    printf("%d",ans);

    return 0;
}

