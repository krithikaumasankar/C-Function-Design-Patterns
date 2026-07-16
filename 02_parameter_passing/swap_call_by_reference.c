#include<stdio.h>
void swap(int*a,int*b);
void swap(int*a,int*b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
   printf("After swapping: a=%d,b=%d\n",*a,*b);
}
int main()
{
   int x,y;
   printf("\n...SWAPPING USING CALL BY REFERENCE...\n");
   printf("\n Enter x,y: ");
   scanf("%d%d",&x,&y);
   printf("\nBefore swapping: x=%d,y=%d\n",x,y);
   swap(&x,&y);
   return 0;
}
