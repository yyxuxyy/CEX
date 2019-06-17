#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{

    //cout << INT_MAX << endl;

    vector<int> myints;
    cout << "0.size:" << myints.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        myints.push_back(i);
        /* code */
    }
    cout << "1.size:" << myints.size() << endl;
    myints.insert(myints.end(), 10, 100);
    cout << "2.size:" << myints.size() << endl;

    for (auto s : myints)
        cout << s << endl;

    return 0;
}