#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *getStr1()
{
    char *p1 = "abcdefg";
    return p1;
}

char *getStr2()
{
    char *p2 = "abcdefg2";
    return p2;
}

int main()
{
    char *p1 = NULL;
    char *p2 = NULL;
    p1 = getStr1();
    p2 = getStr2();

    printf("p1:%s,p2:%s\n", p1, p2);
    printf("p1:%d,p2:%d\n", p1, p2);

    return 0;
}