/**
 *           author: aakash_172
 *           created: 2023-08-05    03:37:31
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll tre[1000000];

void buildutil(int node, int st, int ed, ll arr[])
{
    if (st == ed)
    {
        tre[node] = arr[st];
    }
    else
    {
        int mid = (st + ed) / 2;
        buildutil(node * 2, st, mid, arr);
        buildutil((node * 2) + 1, mid + 1, ed, arr);
        tre[node] = tre[node * 2] + tre[(node * 2) + 1];
    }
}

void build(ll arr[], int n)
{
    buildutil(1, 0, n - 1, arr);
}

ll res(int node, int l, int r, int st, int ed)
{

    if (st > r || ed < l)
    {
        return 0;
    }
    if (st == ed)
    {
        return tre[node];
    }
    else if (st >= l && ed <= r)
    {
        return tre[node];
    }
    else
    {
        int mid = (st + ed) / 2;
        ll left = res(node * 2, l, r, st, mid);
        ll right = res((node * 2) + 1, l, r, mid + 1, ed);
        return left + right;
    }
}

ll query(ll l, ll r, ll n)
{
    return res(1, l - 1, r - 1, 0, n - 1);
}

void upadteutil(int node, int in, ll val, int st, int ed)
{

    if (in < st || in > ed)
    {
        return;
    }
    if (st == ed)
    {
        tre[node] = val;
    }
    else
    {
        int mid = (st + ed) / 2;
        upadteutil(node * 2, in, val, st, mid);
        upadteutil((node * 2) + 1, in, val, mid + 1, ed);
        tre[node] = tre[(2 * node) + 1] + tre[2 * node];
    }
}

void update(ll in, ll val, ll n)
{
    upadteutil(1, in - 1, val, 0, n - 1);
}

int main()
{

    return 0;
}