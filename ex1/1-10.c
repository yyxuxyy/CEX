#include "stdio.h"
#include "stdlib.h"

int main()
{

    char c = getchar();

    while (c != EOF)
    {
        if (c == '   ')
            printf("\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);

        c = getchar();
    }

    system("pause");
    return 0;
}