#include<stdio.h>
int main()
{
     int x, k=1,space,j=1;
   scanf("%d", &x);
   space=x;
   while(j<=x)
   {
      while(k<space)
      {
         printf(" ");
         k++;
      }
      for(int i=1;i<=2*j-1;i++)
      {
         printf("*");
      }
      j++;
      printf("\n");
      space=space-1;
      k=1;
   }
   return 0;
}