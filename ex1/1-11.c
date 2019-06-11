#include "stdlib.h"
#include "stdio.h"

int main()
{
    char c;
    int nl, nw, nc, state;
    nl = nw = nc = 0;
    state = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nw;
        }
        // if(state==1)

        /* code */
    }

    printf("%d,%d,%d", nl, nw, nc);
    system("pause");
    return 0;
}