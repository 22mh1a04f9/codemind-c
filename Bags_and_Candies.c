#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=b*c;
    if(a%d==0)
    {
        printf("%d",a/d);
    }
    else
    {
        printf("%d",a/d+1);
    }
}