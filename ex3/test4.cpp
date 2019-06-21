#include <iostream>
#include <cmath>
using namespace std;

struct Test{
    typedef int foo;
};
template<typename T>
void f(typename T::foo)
{
    cout<<" A Called"<<endl;
}
template<typename T>
void f(T)
{
    cout<<"B Called"<<endl;
}


int main()
{
    f<Test>(10);
    f<int>(10);

    return 0;
}