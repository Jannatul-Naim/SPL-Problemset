#include <stdio.h>
#include <math.h>
int main() {
    int base, exp,result;
    scanf("%d %d",&base,&exp);

    result = pow(base,exp);

    printf("%d", result);
    return 0;
}
