#include <iostream>
#include <cmath>
#define q 795865830
using namespace std;
int isPrime(int n);
int sieve(int n);
//int prime[q];//数组不能超过INT_MAX个字节
bool is_prime[q + 1];
//bool isPrime2(int n);
int main()
{

    cout << isPrime(2501) << endl;
    cout << isPrime(233) << endl;
    //cout << isPrime(3) << endl;

    cout << sieve(q) << endl;
    return 0;
}
int isPrime(int n)
{
    if (n < 2)
        return 0;
    else if (n % 2 == 0)
        return 0;
    else
    {
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

int sieve(int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            p++;
            for (int j = 2 * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return p;
}