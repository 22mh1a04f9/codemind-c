#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        c=0;
        for(int i=0;i<b;i++)
        {
            long int t=(long int)i*i;
            if(t%b==a)
            {
                printf("%d
",i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}