#include "stdio.h"
#include "stdlib.h"

float cTemperature(float fTemperature)
{
    return (5.0 / 9.0) * (fTemperature - 32.0);
}
float fTemperature(float cTemperature)
{
    return 1.8 * cTemperature + 32.0;
}

int main()
{

    float a[100] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300};
    //int n=sizeof(a)/sizeof(a[0]);
    //printf("%d\n",n);

    int n1 = sizeof(a) / sizeof(a[0]);
    printf("%d\n", n1);

    int n = 1;
    while (a[n] != '\0')
    {
        n++;
    }
    printf("%d\n", n);

    printf("*********************************************************\n");
    printf("fTemperature               cTemperature\n");
    printf("*********************************************************\n");

    for (int i = 0; i < n; i++)
    {
        printf("%f          %f\n", a[i], cTemperature(a[i]));
    }

    float m = 0.0;
    while (m <= 100)
    {
        printf("%f              %f\n", m, fTemperature(m));
        m = m + 10;
    }

    printf("1-5 is coming******************************\n");
    m = 300;
    while (m >= 0)
    {
        printf("%f          %f\n", m, cTemperature(m));
        m = m - 20;
    }

    system("pause");
    return 0;
}