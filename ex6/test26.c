#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    do
    {
        c = getchar();
        putchar(c);
    } while (c != '.');
    return 0;
}