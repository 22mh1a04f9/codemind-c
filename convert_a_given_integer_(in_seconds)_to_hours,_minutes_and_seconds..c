#include<stdio.h>
int main()
{
    int sec,min,hrs,rm;
    scanf("%d",&sec);
    hrs=sec/3600;
    rm=sec%3600;
    min=rm/60;
    sec=rm%60;
    printf("H:M:S-%d:%d:%d",hrs,min,sec);
}