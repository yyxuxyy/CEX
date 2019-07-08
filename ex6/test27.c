#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 10;
    int *p = &num;
    printf("%x,%x\n", p, &num);
    printf("%p,%p\n", p, &num);
    return 0;
}