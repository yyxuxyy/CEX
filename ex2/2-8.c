unsigned rightrot(usigned x,int n)
{
    int wordLength(void);
    int rbit;
    while (n-->0)
    {
        rbit=(x&1)<<(wordLength()-1);
        x=x>>1;
        x=x|rbit;
        /* code */
    }
    return x;
    
}
int wordLength(void)
{
    int i;
    unsigned v=(unsigned)~0;
    for (i=1;; (v=v>>1)>0; i++)
    ;
    
        /* code */
    return i;
    
}