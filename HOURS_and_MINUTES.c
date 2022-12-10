#include<stdio.h>
int main()
{
    int hrs,min,rm;
    scanf("%d",&rm);
    hrs=rm/60;
    min=rm%60;
    printf("%d Hour(s) %d Minute(s)",hrs,min);
}