

#include<stdio.h>
int main()
{
   float x, y, z;
   float avg;
   printf("Enter Three Numbers : ");
   scanf("%f %f %f",&x, &y, &z);

   avg=(x+y+z)/3.0;
   printf("Average of Three Numebers is : %.4f", avg);

}
