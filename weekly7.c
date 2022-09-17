#include<stdio.h>
int main()
{
    int x,y,z;
    int a,b,c;
    scanf("%d%d%d",&x,&y,&z);
    a=x+y;
    b=x+z;
    c=y+z;
    if(a>b && a>c)
    {
        printf("%d\n%d",x,y);
    }
    else if(b>a && b>c)
    {
        printf("%d\n%d",x,z);
    }
    else if(c>a && c>b)
    {
        printf("%d\n%d",y,z);
    }
}