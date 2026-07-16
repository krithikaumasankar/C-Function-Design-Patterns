#include<stdio.h>
#include<math.h>
void is_prime(int);
void is_prime(int n)
{
   int i,a=0;
   if(n<=1)
      a=1;
   else
   {
      for(i=2;i<=sqrt(n);i++)
      {
         if(n%i==0)
         {
            a=1;
            break;
         }
      }
   }
   if(a==0)
      printf("%d is a prime number.\n",n);
   else
      printf("%d is not a prime number.\n",n);
}

int main()
{
   int n;
   printf("\n..TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT..\n");
   printf("\nEnter a number: ");
   scanf("%d",&n);
   is_prime(n);
   return 0;
}
