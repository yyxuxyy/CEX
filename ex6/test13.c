#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char *day_name(int n);
    printf("input Day no:\n");
    scanf("%d", &i);
    if (i < 0)
        exit(1);
    printf("Day No:%2d--->%s\n", i, day_name(i));
    return 0;
}
char *day_name(int n)
{
    static char *name[] = {"illegal day", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return ((n < 1 || n > 7) ? name[0] : name[n]);
}