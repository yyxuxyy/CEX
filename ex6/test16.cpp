#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);
    static char *name[] = {"China", "America", "Australia", "France", "German"};
    int n = 5;
    sort(name, n);
    print(name, n);
    return 0;
}
void sort(char *name[], int n)
{
    //char *pt;
    for (int i = 0; i < n; i++)
    {
        //int k = i;
        for (int j = i + 1; j < n; j++)
            if (strcmp(name[i], name[j]) > 0)
               swap(name[i],name[j]);
       
    }
}
void print(char *name[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%s\n", name[i]);
}