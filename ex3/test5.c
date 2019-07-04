#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",a);
    printf("%d,%d,%d", a, ++a, a++);
    return 0;
}