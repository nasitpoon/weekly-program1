#include <stdio.h>

int main()
{
   int x, k,space;
   scanf("%d", &x);
   space=x;
   for(int j=1;j<=x;j++)
   {
      for(int k=1;k<space;k++)
      {
         printf(" ");
      }
      for(int i=1;i<=2*j-1;i++)
      {
         printf("*");
      }
      printf("\n");
      space=space-1;
   }
   return 0;
}