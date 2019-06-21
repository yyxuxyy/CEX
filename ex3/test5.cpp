#include <iostream>
#include <cmath>
using namespace std;
void foo(unsigned i)
{
    cout << "unsigned " << i << endl;
}
template <typename T>
void foo(T t)
{
    cout << "template " << t << endl;
}
int main()
{
    foo(1);
    return 0;
}