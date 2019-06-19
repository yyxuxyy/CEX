#include <iostream>
#include <cmath>
using namespace std;
struct X
{
    char a;
    int b;
    double c;
};
struct Y
{
    char a;
    X b;
} S;

int main()
{
    cout << sizeof(S) << endl;
    cout << sizeof(S.a) << endl;
    cout << sizeof(S.b) << endl;
    cout << sizeof(S.b.a) << endl;
    cout << sizeof(S.b.b) << endl;
    cout << sizeof(S.b.c) << endl;
    return 0;
}