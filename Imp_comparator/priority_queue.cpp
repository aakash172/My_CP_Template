#include <bits/stdc++.h>
using namespace std;
#define ll long long

// comparator for priority_queue

class Compare
{
public:
    bool operator()(pair<ll, ll> &below, pair<ll, ll> &above)
    {
        if (below.first > above.first)
        {
            return true;
        }
        else if (below.first == above.first && below.second < above.second)
        {
            return true;
        }

        return false;
    }
};

int main()
{

    return 0;
}