#include<stdio.h>
char l_to_u(char ch);
char l_to_u(char ch)
{
   char upper;
   if(ch>='a' && ch<='z')
      upper=ch-32;
   else
      upper=ch;
   return upper;
}
int main()
{
   char ch,res;
   printf("\n...LOWERCASE TO UPPERCASE USING FUNCTION...\n");
   printf("\nEnter a character: ");
   scanf("%c",&ch);
   res=l_to_u(ch);
   printf("Uppercase equivalent is %c\n",res);

   return 0;
}
