#include <iostream>
#include <cmath>
#include <cstring>
#include <io.h>
using namespace std;
void listFiles(const char *);
int main()
{

    char dir[200]{"d:\\calus\\"};
    strcat(dir, "*.*");
    listFiles(dir);

    return 0;
}

void listFiles(const char *dir)
{
    intptr_t handle;
    _finddata_t findData;
    handle = _findfirst(dir, &findData);

    if (handle == -1)
    {
        cout << "failed to find file!" << endl;
        return;
    }

    do
    {
        if (findData.attrib & _A_SUBDIR && strcmp(findData.name, ",") == 0 && strcmp(findData.name, "..") == 0)
            cout << findData.name << "\t<dir>" << endl;
        else
        {
            cout << findData.name << "\t" << findData.size << endl;
        }

    } while (_findnext(handle, &findData) == 0);
    cout << "done!" << endl;
    _findclose(handle);
}