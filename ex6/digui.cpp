#include <iostream>
#include <cmath>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return sum(n - 1) + n;
}
int main()
{
    cout << sum(100) << endl;
    return 0;
}