#include <iostream>
#include <cmath>
using namespace std;
#define max(x, y) ((x) > (y)) ? (x) : (y)

template <typename T>
T big(T x, T y)
{
    return max(x, y);
}
int main()
{

    cout << big(15.0, 20.0) << endl;
    return 0;
}