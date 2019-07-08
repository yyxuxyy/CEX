#include<stdlib.h>
#include<stdio.h>
int main(int argc,char**argv)
{
    int a=0,n;
    n=atoi(*++argv);
    while(n--)printf("%d-",a++*2);
    return 0;
}
int main1(int argc,char *argv[])
{
    while(argc-->1)
    printf("%s\n",*++argv);
    return 1;
}