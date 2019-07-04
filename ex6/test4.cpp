#include <iostream>
#include <cmath>
#include <vector>
#include<list>

using namespace std;

int main()
{
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();
    auto it2=v2.begin();
    auto it3 = v1.cbegin(), it4 = v2.cbegin();
    std::cout << typeid(it1).name() << endl;
    cout << typeid(it2).name() << endl;
    cout << typeid(it3).name() << endl;
    cout << typeid(it4).name() << endl;
    


    list<string>a{"milton","shakespare","austen"};
    auto it1=a.begin();
    auto it2=a.rbegin();
    auto it3=a.cbegin();
    auto it4=a.crbegin();
   

    return 0;
}