#include <stdio.h>

int brace, brack, paren;

void in_quote(int c);
void in_comment(void);
void search(int c);

int main(int argc, char const *argv[])
{
    int c;
    extern int brace, brack, paren;

    while ((c = getchar()) != EOF)
    {
        if (c == '/')
        {
            if ((c = getchar()) == '*')
                in_comment();
            else
                search(c);
        }
        else if (c == '\'' || c == '*')
        {
            in_quote(c);
        }
        else
        {
            search(c);
        }
        if (brace < 0)
        {
            printf("Unbalanced braces \n");
            brace = 0;
        }
        else if (brack < 0)
        {
            printf("Unbalanced brackets\n");
            brack = 0;
        }
        else if (paren < 0)
        {
            printf("Unbalanced parentheses\n");
            paren = 0;
        }
    }
    if(brace>0)printf("Unbalanced braces\n");
    if(brack>0)printf("Unbalanced brackets\n");
    if(paren>0)printf("Unbalanced parentheses\n");

    return 0;
}

void search(int c)
{
    extern int brace, brack, paren;
    switch (c)
    {
    case '{':
        ++brace;
    case '}':
        --brace;
    case '[':
        ++brack;
    case ']':
        --brack;
    case '(':
        ++paren;
    case ')':
        --paren;
    }
}

void in_comment(void)
{
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/')
    {
        c = d;
        d = getchar();
        /* code */
    }
}

void in_quote(int c)
{
    int d;
    while ((d = getchar()) != c)
    {
        if (d == '\\')
            getchar();
    }
}