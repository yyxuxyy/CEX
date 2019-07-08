#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main1()
{
    char *list[] = {"first", "second", "third", NULL};
    for (char **p = list; *p != NULL; p++)
        printf("%s\n", p[0]);
    return 0;
}
typedef struct point{
    double x,y;
}point;
typedef struct{
    struct point m;
    double z;
}threepoint;

double threelength(threepoint p)
{
    return sqrt(p.m.x*p.m.x+p.m.y*p.m.y+p.z*p.z);
}

int main()
{
    threepoint p={{3.0,0.0},4.0};
    printf("p is %g\n",threelength(p));
}