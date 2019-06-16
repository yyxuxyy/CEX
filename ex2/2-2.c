#include <stdio.h>

enum loop
{
    NO,
    YES
};

int main()
{

    enum loop okLoop = YES;
    int i = 0, lim = 10;
    char c;

    while (okLoop == YES)
    {
        if (i > lim - 1)
        {
            okLoop = NO;
            /* code */
        }
        else if ((c = getchar()) == EOF)
        {
            okLoop = NO;
        }
        else if ((c = getchar()) == '\n')
        {
            okLoop = NO;
        }
        else
        {
            s[i] = c;
            ++i;
        }
    }

    return 0;
}