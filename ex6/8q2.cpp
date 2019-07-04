#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int n = 8;//n皇后
int a[100] = {0}; //如：a[2]=4表示该皇后位于（2,4)位置上
int sum = 0;
bool judge(int a[], int N)//判断位置合法性
{
    for (int j = 1; j < N; j++)
    {
        if (a[j] == a[N] || abs(a[j] - a[N]) == abs(j - N))
            return false;
    }
    return true;
}
void print_ans()
{
    for (int j = 1; j <= n; j++)
        cout << "<" << j << "," << a[j] << ">"
             << " ";
    cout << endl;
}
void print_ans2()
{
    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= n; k++)

            if (a[j] == k)
                cout <<"o";
                else
                cout<<"*";
        cout<<endl;
                
    }
    cout << endl;
}
void solve(int i)
{
    if (i > n)
    {
        sum++;
        cout << sum << ":" << endl;
        print_ans2();
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        a[i] = j;
        if (judge(a, i))//如果第i行a[i]=j满足要求，则进行第i+1行的设置与判定；不满足要求则重新设定a[i]直至满足或舍弃
            solve(i + 1);
    }
}
int main()
{

    
    solve(1);
    return 0;
}