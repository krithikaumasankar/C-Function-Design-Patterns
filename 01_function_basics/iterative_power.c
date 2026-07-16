#include<stdio.h>
float power(float a,float b);
float power(float a,float b)
{
   float i,res=1;
   for(i=1;i<=b;i++)
      res=res*a;
   return res;
}
int main()
{
   float base,exponent,res;
   printf("\n...POWER FUNCTION...\n");
   printf("\nEnter base:");
   scanf("%f",&base);
   printf("Enter exponent:");
   scanf("%f",&exponent);
   if(exponent<0)
   {
      printf("\nError! exponent should be a non zero value");
      return 1;
   }
   res=power(base,exponent);
   printf("%.2f^%.2f=%.2f\n",base,exponent,res);
   return 0;
}
