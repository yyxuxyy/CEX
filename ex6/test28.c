#include <stdio.h>
#include <stdlib.h>
void printMin(int a, int b)
{
    printf("%d\n", (a < b) ? a : b);
}
int myCompare(const void *el1, const void *el2)
{
    unsigned int *p1, *p2;
    p1 = (unsigned int *)el1;
    p2 = (unsigned int *)el2;
    return (*p1 % 10) - (*p2 % 10);
}
int main1()
{

    void (*pf)(int, int);
    int x = 4, y = 5;
    pf = printMin;
    pf(x, y);
    return 0;
}
#define num 5
int main()
{

    unsigned int a[num] = {8, 123, 11, 10, 4};
    qsort(a, num, sizeof(unsigned int), myCompare);
    for (int i = 0; i < num; i++)
        printf("%4d", a[i]);

    return 0;
}