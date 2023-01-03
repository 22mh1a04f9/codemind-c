#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=1;;i++)
    {
        if(p(c+i))
        {
            printf("%d",i);
            break;
        }
    }
}