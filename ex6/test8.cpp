#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    // string word;
    // while (cin >> word)
    // {
    //     for (auto &i : word)
    //         if (ispunct(i))
    //             i = NULL;
    //     cout<<word<<endl;
    // }

    const string s("keep out!");
    for (auto &i : s)
        cout << typeid(i).name() << endl;
    int z = 10;
    cout << typeid(z).name() << endl;

    cin.get();
    return 0;
}