
#include <bits/stdc++.h>

using namespace std;

struct comp
{

    bool operator()(const pair<int, int> &p1,
                    const pair<int, int> &p2)
    {

        int diff1 = p1.first - p1.second;
        int diff2 = p2.first - p2.second;
        if (diff1 == diff2)
            return p1.first > p2.first;
        return diff1 < diff2;
    }
};

int main()
{

    set<pair<int, int>, comp> s;

    s.insert({4, 3});
    s.insert({5, 2});
    s.insert({6, 4});
    s.insert({7, 3});
    s.insert({5, 4});

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}