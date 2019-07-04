#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    if (a == b)
    {
        cout << "a==b" << endl;
    }
    else if (a < b)
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }
    if (a.size() >= b.size())
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}