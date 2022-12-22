#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d%d",&n,&k);
    for(i=n;i<=k;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}