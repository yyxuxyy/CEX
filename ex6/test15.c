#include <stdio.h>
#include <stdlib.h>
char *day_name(char* s[], int n);
int main()
{
    char *name[] = {"illegal day", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    int i;
    scanf("%d",&i);
    printf("enter %d---->%s",i,day_name(name,i));
    return 0;
}
char *day_name(char* s[], int n)
{
    char *pp1, *pp2;
    pp1 = *s;
    pp2 = *(s + n);
    return (n < 1 || n > 7) ? pp1 : pp2;
}