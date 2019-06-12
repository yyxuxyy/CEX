#include <iostream>

using namespace std;
int mystery2(const char *);

int main()
{
    char string1[80];
    cout << "enter a string: ";
    cin >> string1;
    cout << mystery2(string1) << endl;
    system("pause");
    return 0;
}

int mystery2(const char *s)
{
    int x;
    const char *p = s;
    for (x = 0; *p != '\0'; p++)
    {
        ++x;
    }
    return x;
}