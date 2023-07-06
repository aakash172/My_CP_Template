/**
 *           author: aakash_172
 *           created: 2023-07-07    02:24:39
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class sqrtDecomp
{
public:
    vector<ll> b, a;
    int len, n;
    sqrtDecomp(vector<ll> &a)
    {
        n = a.size();
        len = (int)sqrt(n + .0) + 1;
        b.assign(len, 0);
        this->a = a;
        for (int i = 0; i < n; ++i)
        {
            b[i / len] += a[i];
        }
    }

    ll query(ll l, ll r)
    {
        ll sum = 0;
        int c_l = l / len, c_r = r / len;
        if (c_l == c_r)
            for (int i = l; i <= r; ++i)
                sum += a[i];
        else
        {
            for (int i = l, end = (c_l + 1) * len - 1; i <= end; ++i)
            {
                sum += a[i];
            }
            for (int i = c_l + 1; i <= c_r - 1; ++i)
            {
                sum += b[i];
            }
            for (int i = c_r * len; i <= r; ++i)
            {
                sum += a[i];
            }
        }
        return sum;
    }
};

int main()
{

    return 0;
}