#include<stdio.h>
void update_values(int *a,int *b);
void update_values(int *a,int *b)
{
   *a=*a*2;
   *b=*b*3;
   printf("\nInside function a=%d,b=%d",*a,*b);
}
int main()
{
   int x,y;
   printf("\n...UPDATE VALUES BY CALL BY REFERENCE...\n");
   printf("\nEnter x: ");
   scanf("%d",&x);
   printf("Enter y: ");
   scanf("%d",&y);
   update_values(&x,&y);
   printf("\nIn main after function call  x=%d,y=%d\n",x,y);
   return 0;
}
