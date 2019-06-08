#include "stdio.h"
#include "stdlib.h"


int main()
{
//char cstr[100];
char c=getchar();
int n=0;
while(c!=EOF)
{
    if(c==' ') n++;
    else n=0;
   if(n<2)putchar(c);


    c=getchar();
}




    system("pause");
    return 0;
}