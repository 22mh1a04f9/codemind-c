#include<stdio.h>
int main()
{
    int units;
    float bill,tbill,sc;
    scanf("%d",&units);
    if(units<200)
    {
        bill=units*1.20;
    }
    else if(units>=200 && units<400)
    {
        bill=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        bill=units*1.80;
    }
    else
    {
        bill=units*2.00;
    }
    if(bill>=400)
    {
        sc=bill*0.15;
        tbill=bill+sc;
        printf("%.2f",tbill);
    }
    else
    {
        tbill=bill+100;
        printf("%.2f",tbill);
    }
}