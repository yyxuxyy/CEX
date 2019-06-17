#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;

template <typename T>
struct Point
{
    T x;
    T y;
    Point() : x(0), y(0){};
    Point(T _x, T _y) : x(_x), y(_y){};
};

template <typename T>
bool isLeftTurn(Point<T> &p0, Point<T> &p1, Point<T> &p2)
{
    return (p1.x - p0.x) * (p2.y - p0.y) >= (p1.y - p0.y) * (p2.x - p0.x);
}

//pq为有向线，r为判断点，判断r是否位于pq线左侧
template <typename T>
bool isLeftTurn2(Point<T> &p, Point<T> &q, Point<T> &r)
{
    return p.x * q.y + q.x * r.y + r.x * p.y - p.y * q.x - q.y * r.x - r.y * p.x >= 0;
}

int main()
{
    vector<Point<int>> pts;
    pts.emplace_back(1, 1);
    pts.emplace_back(8, 0);
    pts.emplace_back(16, 8);
    pts.emplace_back(2, 8);
    pts.emplace_back(4, 4);
    pts.emplace_back(0, 5);
    pts.emplace_back(12, 6);
    pts.emplace_back(8, 4);
    pts.emplace_back(6, 2);

    if (pts.empty())
    {
        return 0;
    }
    int y_min = INT_MAX;
    int x_min = INT_MAX;
    int start_index = 0;
    for (int i = 0; i < pts.size(); i++)
    {
        if (pts[i].y < y_min)
        {
            y_min = pts[i].y;
            x_min = pts[i].x;
            start_index = i;
        }
        else if (pts[i].y == y_min && pts[i].x < x_min)
        {
            x_min = pts[i].x;
            start_index = i;
        }
    }
    
    vector<Point<int>> st;
    st.emplace_back(0, 0);
    pts.erase(pts.begin() + start_index);
    for (auto &pt : pts)
    {
        pt.x -= x_min;
        pt.y -= y_min;
    }
    //排序的核心思想是？
    sort(pts.begin(), pts.end(), [](Point<int> &p1, Point<int> &p2) {
        if (p1.x * p2.y == p1.y * p2.x)
        {
            return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y;
        }
        return p1.x * p2.y > p1.y * p2.x;
    });

    st.push_back(pts[0]);
    for (int i = 1; i < pts.size();)
    {
        if (isLeftTurn(st[st.size() - 2], st.back(), pts[i]))
        {
            st.push_back(pts[i]);
            i++;
        }
        else
        {
            st.pop_back();
        }
    }
    for (auto &i : st)
    {
        cout << i.x + x_min << '\t' << i.y + y_min << endl;
    }
}