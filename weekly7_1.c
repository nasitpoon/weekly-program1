#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("%d\n",x);
        if(y>z)
        {
            printf("%d",y);
        }
        else
        {
            printf("%d",z);
        }
    }
    else if(y>x && y>z)
    {
        printf("%d\n",y);
        if(x>z)
        {
            printf("%d",x);
        }
        else
        {
            printf("%d",z);
        }
    }
    else if(z>x && z>y)
    {
        printf("%d\n",z);
        if(x>y)
        {
            printf("%d",x);
        }
        else
        {
            printf("%d",y);
        }
    }

}
