#include <iostream>
#include <cmath>
using namespace std;

#define N 8
int a[N+1]{0}; //每列皇后所在位置；
int num;
bool check(int x)
{
    for (int i = 1; i < x; i++)
    {
        if ((a[x] == a[i]) || (abs(a[i] - a[x])) == abs(x - i))
            return false;
        /* code */
    }
    return true;
}
void ShowResult()
{
    cout << "No. " << ++num << endl;
    for (int i = 1; i < N+1; ++i)
    {
        for (int j = 1; j < N+1; ++j)
        {
            if (a[i] == j)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void BackTrack(int x)
{
    if (x > N)
    {
        ShowResult();
    }
    else
    {
        for (int j = 1; j < N+1; ++j)
        {
            a[x] = j;
            if (check(x))
            {
                BackTrack(x + 1);
            }
        }
    }
}

int main()
{
    BackTrack(0);
    return 0;
}