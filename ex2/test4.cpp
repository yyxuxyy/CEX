#include <iostream>
#include <cmath>
using namespace std;

struct X
{
    double a;
    char b;
    int c;
} S;
struct X2{
    char a;
    double b;
    int c;
}S2;
int main()
{
    cout << sizeof(S) << endl;
    cout << sizeof(S.a) << endl;
    cout << sizeof(S.b) << endl;
    cout << sizeof(S.c) << endl;
    cout<<"*****************************"<<endl;
    cout<<sizeof(S2)<<endl;
    cout<<sizeof(S2.a)<<endl;
    cout<<sizeof(S2.b)<<endl;
    cout<<sizeof(S2.c)<<endl;
    return 0;
}