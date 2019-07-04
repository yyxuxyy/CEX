#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <iterator>
#include <locale>
#include <string>
#include <array>

using namespace std;
string generate(char first, char mid);
int main()
{

    // string baseString("abcdefghijklmnopqrstuvwxyz{");

    // char first = 'a';
    // char mid = 'a';

    // int n = baseString.size();
    // vector<string> v;
    // v.push_back(generate(first, mid));

    // for (int i = 1; i < n; i++)
    // {

    //     first++;

    //     mid += 2;

    //     v.push_back(generate(first, mid));
    // }

    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }

    cout << generate('a', 'c') << endl;

    system("pause");
    return 0;
}
string generate(char first, char mid)
{

    string str;
    int n = mid - first;
    if (first > mid)
    {
        return NULL;
    }
    else if (first == mid)
    {
        return string(1, first);
    }
    else
    {

        for (int i = 0; i <= n; i++)
        {

           str.push_back(first++);

        }
        first--;
        for (int i = n + 1; i <= 2 * n; i++)
        {

            str.push_back(--first);

        }

    }

    return str;
}