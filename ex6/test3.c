#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'c';
    int i = 10;
    char buf[100];
    printf("%c", c);
    printf("%d", i);
    memset(buf, 0, 100);
    sprintf(buf, "%c", c);
    memset(buf, 0, 100);
    sprintf(buf, "%d", i);
    return 0;
}