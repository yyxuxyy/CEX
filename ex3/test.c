#include "stdio.h"
#include "stdlib.h"
int main()
{
    char *p ="abcd";
    char s[5] = "abcd";
    printf("size of p:%d\n", strlen(p));
    printf("size of s->:%d\n",strlen(s));
    printf("size of s:%d", sizeof(s));
    return 0;
}