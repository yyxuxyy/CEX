#include <stdio.h>
#include <stdlib.h>
int main()
{
   const char *p="hello";
   
    *p = "xdfsa";
    printf("%s", *p);
    return 0;
}