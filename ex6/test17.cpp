#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#define N 8
using namespace std;
int a[N + 1];
int num = 0;
bool check(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[n] || abs(i - n) == abs(a[i] - a[n]))
            return false;
    }
    return true;
}
void print()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            if (a[i] == j)
                cout << "o";
            else
                cout << "*";
        cout << endl;
    }
}
void getq(int m)
{
    if (m > N)
    {
        num++;
        //cout << "for the %d time: " << num << endl;
        cout<<"for the "<<num<<" time :"<<endl;
        print();
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        a[m] = i;
        if (check(m))
            getq(m + 1);
    }
}
int main()
{
    getq(1);
    return 0;
}