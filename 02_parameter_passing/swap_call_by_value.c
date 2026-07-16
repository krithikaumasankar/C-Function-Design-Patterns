#include<stdio.h>
void swap(int a,int b);
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("\nAfter swapping: a=%d,b=%d\n",a,b);
}
int main()
{
   int x,y;
   printf("\n...SWAPPING USING CALL BY VALUE...\n");
   printf("\n Enter x,y: ");
   scanf("%d%d",&x,&y);
   swap(x,y);
   printf("Before swapping: x=%d,y=%d\n",x,y);
   return 0;
}
