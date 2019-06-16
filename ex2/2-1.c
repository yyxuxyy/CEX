#include <stdio.h>
#include <limits.h>

int main()
{
    printf("singned char min=%d\n", SCHAR_MIN);
    printf("singned char max=%d\n", SCHAR_MAX);

    printf("singned short min=%d\n",SHRT_MIN);
    printf("signed short max=%d\n",SHRT_MAX);

    printf("signed int min=%d\n",INT_MIN);
    printf("signed int max=%d\n",INT_MAX);

    printf("signed long min=%ld\n",LONG_MIN);
    printf("signed long max=%ld\n",LONG_MAX);

    printf("signed longlong min=%lld\n",LLONG_MIN);
    printf("signed longlong max=%lld\n",LLONG_MAX);

    printf("unsigned char max=%u\n",UCHAR_MAX);
    printf("unsigned short max=%u\n",USHRT_MAX);
    printf("unsigned int max=%u\n",UINT_MAX);
    printf("unsigned long max=%lu\n",ULONG_MAX);
    printf("unsigned longlong max=%llu\n",ULLONG_MAX);

    return 0;
}