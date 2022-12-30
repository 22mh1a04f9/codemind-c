#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b<c)
    {
        d=a+c;
        printf("%d",d);
    }
    else if(b>a&&a<c)
    {
        d=b+c;
        printf("%d",d);
    }
    else if(c<=a&&b>=c)
    {
        d=a+b;
        printf("%d",d);
    }
}