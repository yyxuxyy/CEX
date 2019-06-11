#include "stdio.h"
#include "stdlib.h"

int main()
{

    char c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        putchar('\n');
    }

    system("pause");
    return 0;
}