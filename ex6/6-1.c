#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 1000

struct Key
{
    char *word;
    int count;
};

int getword(char *, int);
int binsearch(char *, struct Key *, int);
int main()
{
    struct Key t1[2] = {{"asdfda", 1}, {"afsd", 2}};
    printf("%d", binsearch("hello", t1, 3));
    return 0;
}
int getword(char *word, int lim)
{
    
    return 0;
}
int binsearch(char *word, struct Key tab[], int n)
{
    return 1;
}