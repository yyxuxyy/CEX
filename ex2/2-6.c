#include "stdio.h"
#include "stdlib.h"
int main()
{

    return 0;
}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}