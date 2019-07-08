#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    time_t big = 0x7fffffff;
    printf("big=%s\n", ctime(&big));
    printf("big=%s\n",asctime(gmtime(&big)));

    return 0;
}