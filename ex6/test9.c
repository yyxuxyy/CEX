#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int i;
    textbackgroud(0);
    clrsr();
    for ( i = 1; i < 8; i++)
    {
        window(10 + i * 5, 5 + i, 30 + i * 5, 15 + i);
        textbackground(i);
        clrsr();
    }

    getch();
    return 0;
}