#include<stdio.h>
int power(int b,int p);
int power(int b,int p)
{
   if(p==0)
      return 1;
   else
      return b*power(b,(p-1));
}
int main()
{
   int b,p,res;
   printf("\n...POWER USING RECURSION FUNCTION...\n");
   printf("\nEnter base: ");
   scanf("%d",&b);
   printf("Enter power: ");
   scanf("%d",&p);
   res=power(b,p);
   printf("\n%d^%d=%d\n",b,p,res);
   return 0;
}
