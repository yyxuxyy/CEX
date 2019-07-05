#include <stdio.h>
#include <stdlib.h>
#define N 20
int main()
{
    int a[N][N] = {0};

    int data = 1;

    for (int i = 0, j = 0, k = 0; k < (N + 1) / 2; k++)
    {
        while (j < N - k)
        {
            a[i][j] = data++;
            j++;
        }
        j--;
        i++;
        while (i < N - k)
        {
            a[i][j] = data++;
            i++;
        }
        i--;
        j--;
        while (j > k - 1)
        {
            a[i][j] = data++;
            j--;
        }
        j++;
        i--;
        while (i > k)
        {
            a[i][j] = data++;
            i--;
        }
        i++;
        j++; 
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%8d", a[i][j]);
        printf("\n");
    }
    system("pause");

    return 0;
}