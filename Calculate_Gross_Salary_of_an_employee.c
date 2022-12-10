#include<stdio.h>
int main()
{
    float gs,hra,bs,da,pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}