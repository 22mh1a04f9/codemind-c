#include<stdio.h>
int main()
{
    int s=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n*(n+1)/2;
    }
    printf("%d",s);
}