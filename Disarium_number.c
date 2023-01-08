#include<stdio.h>
#include<math.h>
int l(int n)
{
    int a=0;
    while(n!=0)
    {
        a++;
        n=n/10;
    }
    return a;
}
int main()
{
    int s=0,p,m,r,b;
    scanf("%d",&m);
    r=l(m);
    b=m;
    while(b>0)
    {
        p=b%10;
        s=s+(int)pow(p,r);
        b=b/10;
        r--;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}