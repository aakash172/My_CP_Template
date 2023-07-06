/**
 *           author: aakash_172
 *           created: 2023-07-04    18:57:40
 **/
#include <bits/stdc++.h>
using namespace std;


template <typename T>
struct RMQ
{
    vector<vector<T>> spt;

    RMQ(const vector<T> &a) : spt(1, a)
    {
        int n = (int)a.size();
        for (int j = 1; 1 << j <= n; j++)
        {
            spt.emplace_back(n - (1 << j) + 1);
            for (int i = 0; i + (1 << j) <= n; i++)
                spt[j][i] = min(spt[j - 1][i], spt[j - 1][i + (1 << (j - 1))]);
        }
    }

    T query(int i, int j)
    {
        int k = __lg(j - i + 1);
        return min(spt[k][i], spt[k][j - (1 << k) + 1]);
    }
};



int main()
{
    vector<int> a;
    // Declare
    //   RMQ<int> m1(a);

    // query
    //  m1.query(left,right)   return min of between left and right
    return 0;
}