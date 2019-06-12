//直方图

#include <stdlib.h>
#include <stdio.h>

#define maxLength 100
#define maxWord 20

#define IN 1
#define Out 0

int main()
{

    int c, i, nc, state;
    int len;          // length of each bar
    int maxValue = 0; //maxinum value for wl[]
    int ovFlow = 0;   //number of overflow words;
    int wl[maxWord];  //word length counter;

    state = Out; //记录是否处于单词内部

    for (i = 0; i < maxWord; i++)
    {
        wl[i] = 0;
        /* code */
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = Out;
            if (nc > 0)
            {
                if (nc < maxWord)
                    ++wl[nc];
                else
                    ++ovFlow;
            }
            nc = 0;
        }
        else if (state == Out)
        {
            state = IN;
            nc = 1;
        }
        else
        {
            ++nc;
        }
    }

    for (i = 1; i < maxWord; i++)
    {
        if (wl[i] > maxValue)
            maxValue = wl[i];
    }

    for (i = 1; i < maxWord; ++i)
    {
        /* 
        printf("%5d-%5d:", i, wl[i]);
        if (wl[i] > 0)
        {
            if ((len = wl[i] + maxLength / maxValue) <= 0)
                len = 1;
        }
        else
            len = 0;
        while (len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
        */
        if (wl[i] > 0)
        {
            printf("%5d-%5d:", i, wl[i]);
            len = wl[i];
            while (len > 0)
            {
                putchar('*');
                --len;
            }
            putchar('\n');
        }
    }
    if (ovFlow > 0)
        printf("There are %d words >= %d\n", ovFlow, maxWord);
    system("pause");
    return 0;
}