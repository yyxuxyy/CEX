#include <iostream>
#include <cmath>
using namespace std;

class Box
{
public:
    string str()
    {
        return "yes";
    }
};

class Bin
{
public:
    string str1()
    {
        return "no";
    }
};

template <typename T>
std::string str(T &t)
{
    cout << "1.---------------------" << endl;
    return "null";
};

template <>
std::string str(string &t)
{
    cout << "2.---------------------" << endl;
    return t;
};

template <typename T, string (T::*U)() = &T::str>
string str(typename std::enable_if<std::is_class<T>::value && !std::is_same<T, string>::value, T>::type &t)//非string类型
{
    cout << "3.---------------------" << endl;
    return t.str();
};

template <typename T>
string str(typename std::enable_if<std::is_arithmetic<T>::value, T>::type &t)//数值型T
{
    cout << "4.---------------------" << endl;
    return std::to_string(t);
};

int main()
{
    string s = "sddds";
    cout << str<string>(s) << endl;

    bool j = true;
    cout << str<bool>(j) << endl;

    int i = 1000;
    cout << str<int>(i) << endl;

    float f = 10.6f;
    cout << str<float>(f) << endl;

    Box b1;
    cout << str<Box>(b1) << endl;

    Bin b2;
    cout << str<Bin>(b2) << endl;

    return 1;
}
