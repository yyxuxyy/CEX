#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
void reverse(char s[]);
void reverse2(char *p1);
void reverse3(char *p, char *to)
{
    if (p == NULL)
        return;
    if (*p == '\0')
        return;
    reverse3(p + 1, to);
    strncat(to, p, 1);
}
char buf[1000];
int main()
{

    char la[100] = "abcdefghijk";
    reverse(la);
    printf("%s\n", la);
    memset(buf, 0, sizeof(buf));
    reverse2(la);
    printf("%s\n", buf);
    {
        char mybuf[1024] = {0};
        reverse3(la, mybuf);
        printf("%s", mybuf);
    }
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

void reverse(char s[]) //非0部分字符串首尾交换
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
void reverse2(char *p)
{
    if (p == NULL)
        return;
    if (*p == '\0')
        return;
    reverse2(p + 1);
    // strcat(buf,p);
    strncat(buf, p, 1);
}