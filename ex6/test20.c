#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main1(int argc, char *argv[])
{

    char *p = argv[0];
    char *q;
    while (*p != '\0')
    {
        *q = toupper(*p);
        p++;
        q++;
    }
    *q = '\0';

    printf("%s\n", *q);

    return 0;
}

int main(int argc, char **argv)
{
    int c;
    if (strcmp(argv[0], "lower") == 0)
        while ((c = getchar()) != EOF)
            putchar(tolower(c));
    else
    {
        while ((c = getchar()) != EOF)
        {
            putchar(toupper(c));
        }
    }

    return 0;
}