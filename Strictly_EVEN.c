#include<stdio.h>
int main()
{
    int n,i,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2==0)
            {
                p++;
            }
            else
            {
                printf("False");
                p=0;
                break;
            }
        }
    }
    if(p>0)
    {
        printf("True");
    }
}