#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    (*p)++;

    for (int i = 0; i < 5; i++)
        printf("%d  ", a[i]);
    printf("\n");
    printf("%x", a);
    printf("\n");
    printf("%d", sizeof(*a));
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d,%x  ", a[i], &a[i]);
        printf("%d,%x  ",*(a+i),a+i);
        printf("%d,%x  ", p[i], &p[i]);
        printf("%d,%x  ", *(p + i), p + i);
    }
    return 0;
}