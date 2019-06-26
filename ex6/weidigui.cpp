#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

long long  factn(long long n, long long midresult)
{
    if (n == 1)
        return midresult;
    else
        return factn(n - 1, n * midresult);
}
long long fact(long long  n)
{
    return factn(n, 1);
}
int main()
{
    cout<<fact(2)<<endl;
    cout<<fact(3)<<endl;
    cout << fact(20) << endl;
    cout<<LLONG_MAX<<endl;
    cout<<fact(22)<<endl;
    cout<<fact(19)<<endl;
    return 0;
}