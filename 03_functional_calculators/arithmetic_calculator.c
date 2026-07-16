#include<stdio.h>
float add(float,float);        //function declaration
float sub(float,float);
float sub(float,float);
int div(int,int);
int modulo(int,int);
float add(float a,float b)     //function definition
{
   return a+b;
}
float sub(float a,float b)
{
   return a-b;
}
float mul(float a,float b)
{
   return a*b;
}
int div(int a,int b)
{
   return a/b;
}
int modulo(int a,int b)
{
   return a%b;
}
int main()
{
   int choice,x,y,result;
   float a,b,res;
   printf("\n...SIMPLE ARITHMETIC CALCULATOR...\n");
   printf("\n1.Addition");
   printf("\n2.Subraction");
   printf("\n3.Multiplication");
   printf("\n4.Division");
   printf("\n5.Modulo");
   printf("\n6.Exit");
   do
   {
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
            printf("\nEnter two numbers: ");
            scanf("%f%f",&a,&b);
            res=add(a,b);                       //function calling
            printf("%f+%f=%f\n",a,b,res);
            break;
         case 2:
            printf("\nEnter two numbers: ");
            scanf("%f%f",&a,&b);
            res=sub(a,b);
            printf("%f-%f=%f\n",a,b,res);
            break;
         case 3:
            printf("\nEnter two numbers: ");
            scanf("%f%f",&a,&b);
            res=mul(a,b);
            printf("%f*%f=%f\n",a,b,res);
            break;
         case 4:
            printf("\nEnter two numbers: ");
            scanf("%d%d",&x,&y);
            if(y!=0)
            {
               result=div(x,y);
               printf("%d/%d=%d\n",x,y,result);
            }
            else
               printf("Error! division by zero....\n");
            break;
         case 5:
            printf("\nEnter two numbers: ");
            scanf("%d%d",&x,&y);
            result=modulo(x,y);
            printf("%d modulo %d = %d\n",x,y,result);
            break;
         case 6:
            printf("\nExiting the calculator...\n");
            break;
         default:
            printf("\nInvalid choice..! Please try again...\n");
      }
   }while(choice!=6);
   return 0;
}
