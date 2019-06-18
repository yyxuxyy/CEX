#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int);
int main()
{
    cout << isPrime(17) << endl;

    cout << isPrime(233) << endl;
    cout << isPrime(433) << endl;
    cout << isPrime(247) << endl;
    cout << isPrime(2501) << endl;
    return 0;
}

bool isPrime(int x)
{
    if (x <= 2)
        return false;
    else if (x % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            cout << x <<"---"<< i << endl;
            return false;
        }
        /* code */
    }
    return true;
}