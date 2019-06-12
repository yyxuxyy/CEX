#include <stdlib.h>
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state;
    state = OUT;//记录是否处于单词内部
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
                /* code */
            }

            /* code */
        }
        else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }

    system("pause");
    return 0;
}