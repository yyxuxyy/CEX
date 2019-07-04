#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main1()
{
    int word;
    vector<int> v1;
    while (cin >> word)
    {
        v1.push_back(word);
    }

    for_each(v1.begin(), v1.end(), [](int i) { cout << i << endl; });
    cin.get();

    return 0;
}

int main()
{

string s("Dragon Land");

string s1;
s1.assign(s);
s1.assign(s,4,2);
cout<<s1<<endl;


    cin.get();
    return 0;
}