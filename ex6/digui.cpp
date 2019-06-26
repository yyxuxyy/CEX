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
int jc(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * jc(n - 1);
}
int main()
{
    cout << sum(100) << endl;
    cout << jc(5) << endl;
    cout<<jc(20)<<endl;
    return 0;
}