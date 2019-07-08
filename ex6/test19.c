#include <stdio.h>
#include <stdlib.h>

float *get_mem(void)
{
    float *p;
    p = (float *)calloc(100, sizeof(float));
    if (!p)
    {
        printf("calloc failed\n");
        exit(1);
    }
    return p;
}

int main1()
{
    printf("%x", get_mem());
    return 0;
}
int main()
{
    char *str[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        if ((str[i] = (char*)malloc(128)) == NULL)
        {
            printf("allocation failed\n");
            exit(1);
        }
        gets(str[i]);
    }

    for (i = 0; i < 100; i++)
        free(str[i]);

    return 0;
}