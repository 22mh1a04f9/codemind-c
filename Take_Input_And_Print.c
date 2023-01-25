#include<stdio.h>
#include<string.h>
int main()
{
    int n;
   scanf("%d",&n);
    char name[30];
    fgets(name,30,stdin);
    fputs(name,stdout);

}