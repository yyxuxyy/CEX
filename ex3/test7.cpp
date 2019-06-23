#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
typename std::enable_if<std::is_trivial<T>::value>::type SFINE_test(T value)
{
    cout << "T is trival" << endl;
}

template <typename T>
typename std::enable_if<!std::is_trivial<T>::value>::type SFINE_test(T value)
{
    cout << "T is none trival" << endl;
}

int main()
{
    SFINE_test(std::string("123"));
    SFINE_test(123);
    return 0;
}