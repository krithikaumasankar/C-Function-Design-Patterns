#include<stdio.h>

float f_to_c(float);
float c_to_f(float);

float f_to_c(float f)
{
   float c;
   c=((f-32)*0.56);
   return c;
}
float c_to_f(float c)
{
   float f;
   f=((1.8*c)+32);
   return f;
}
int main()
{
   float f,c,res;
   int choice;
   printf("\n...CONVERSION OF TEMPERATURE USING FUNCTION...\n");
   printf("\n1.Fahrenheit to Celsious");
   printf("\n2.Celsius to Fahrenheit");
   printf("\n3.Exit\n");
   do
   {
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
            printf("Enter fahrenheit value: ");
            scanf("%f",&f);
            res=f_to_c(f);
            printf("\nThe celsius value is %f\n",res);
            break;
         case 2:
            printf("Enter celsius value: ");
            scanf("%f",&c);
            res=c_to_f(c);
            printf("\nThe fahrenfeit value is %f\n",res);
            break;
         case 3:
            printf("\nExit..!\n");
            break;
         default:
            printf("\nInvalid choice...! please try again..\n");
      }
   }while(choice!=3);
   return 0;
}
