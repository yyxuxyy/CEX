#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
void reverse(char s[]);
int main()
{

    return 0;
}

void escape(char s[], char t[])
{
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++)
    {
        switch (t[i])
        {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;

        default:
            s[j++] = t[i];
            break;
        }
    }
    s[j] = '\0';
}
void unescape(char s[], char t[])
{
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++)
        switch (t[i])
        {
        case '\\':
            switch (t[++i])
            {
            case 'n':
                s[j++] = '\n';
                break;
            case 't':
                s[j++] = '\t';
                break;

            default:
                s[j++] = '\\';
                s[j++] = t[i];
                break;
            }
            /* code */
            break;

        default:
            s[j++] = t[i];

            break;
        }
    s[j] = '\0';
}
void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])//非0部分字符串首尾交换
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}