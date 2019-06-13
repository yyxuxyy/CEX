#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void  reverse(char to[],char from[]);
int main()
{

    // int len, max;
    char line[MAXLINE],to[MAXLINE];
    while (get_line(line, MAXLINE) > 0)
        {
            reverse(to,line);
            printf("%s\n",to);
        }
    return 0;
}
int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; (i < lim - 1) && (c = getchar()) != EOF && (c != '\n'); i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void reverse(char to[],char from[])
{
    int i=0,n=0;
    while(from[n]!='\n')
    {
        n++;
    }
    while((to[i]=from[n-1])&&n>=0)
    {
        n--;
        i++;
    }
    to[i]='\0';
}