#include <stdio.h>
#include <stdlib.h>
void fun()
{
    printf("Call fun");
}
int main()
{
    void (*p)();
    p=fun;
    (*p)();

    return 0;
}