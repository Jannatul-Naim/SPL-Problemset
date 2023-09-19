#include <stdio.h>

int main()
{

    float a,hw,ct,mt,tf,total_number;
    int i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        printf("Enter Number in the order(A,HW,CT,MT,TF) with space : ");
        scanf("%f %f %f %f %f",&a,&hw,&ct,&mt,&tf);

        total_number=((a+hw+ct+mt+tf)*100)/180;

        if(total_number>100 || total_number<0)
        {
            printf("Invalid input");
        }
        else if(total_number>=90)
        {
            printf("Student %d : A\n",i);
        }
        else if(total_number>=86)
        {
            printf("Student %d : A-\n",i);
        }
        else if(total_number>=82)
        {
            printf("Student %d : B+\n",i);
        }
        else if(total_number>=78)
        {
            printf("Student %d : B\n",i);
        }
        else if(total_number>=74)
        {
            printf("Student %d : B-\n",i);
        }
        else if(total_number>=70)
        {
            printf("Student %d : C+\n",i);
        }
        else if(total_number>=66)
        {
            printf("Student %d : C\n",i);
        }
        else if(total_number>=62)
        {
            printf("Student %d : C-\n",i);
        }
        else if(total_number>=58)
        {
            printf("Student %d : D+\n",i);
        }
        else if(total_number>=55)
        {
            printf("Student %d : D\n",i);
        }
        else
        {
            printf("Student %d : F\n",i);
        }
    }

    return 0;
}
