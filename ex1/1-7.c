#include "stdio.h"
#include "stdlib.h"
//notice the difference between '' and ""
int main()
{

    int empty = 0, tab = 0, line = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        /* code */
        if (c == ' ')
            empty++;
        else if (c == '    ')
            tab++;
        else if (c == '\n')
            line++;
    }
    printf("%d,%d,%d", empty, tab, line);

    system("pause");
    return 0;
}