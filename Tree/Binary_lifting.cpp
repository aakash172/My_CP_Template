/**
 *           author: aakash_172
 *           created: 2023-07-30    12:31:11
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mbit = 20;
ll lev[300009];
ll parent[300009][mbit + 1];
vector<ll> adj[300009];
void dfs(ll sr, ll pr, vector<ll> adj[])
{

    for (auto x : adj[sr])
    {
        if (x == pr)
            continue;
        parent[x][0] = sr;
        lev[x] = lev[sr] + 1;
        dfs(x, sr, adj);
    }
}

ll level_up(ll a, ll b)
{

    ll k = lev[b] - lev[a];
    ll rs = b;
    for (int i = 0; k > 0; i++)
    {
        if (k & 1)
        {
            rs = parent[rs][i];
        }
        k /= 2;
    }

    return rs;
}

ll kth(ll b, ll k)
{
    ll rs = b;
    for (int i = 0; k > 0; i++)
    {
        if (k & 1)
        {
            rs = parent[rs][i];
        }
        k /= 2;
        if (rs == 0)
        {
            return -1;
        }
    }

    return rs;
}

ll lca(ll a, ll b)
{
    if (lev[a] > lev[b])
    {
        swap(a, b);
    }
    b = level_up(a, b);
    if (a == b)
        return a;
    for (int i = mbit; i >= 0; i--)
    {
        ll ap = parent[a][i];
        ll bp = parent[b][i];
        if (ap != bp)
        {
            a = ap;
            b = bp;
        }
    }

    return parent[a][0];
}
void reset(int n)
{
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
}
void binary_lifting(ll n)
{
    dfs(1, 0, adj);
    for (int i = 1; i <= mbit; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (parent[j][i - 1] != 0)
            {
                parent[j][i] = parent[parent[j][i - 1]][i - 1];
            }
        }
    }
}

ll dist(ll a, ll b)
{
    ll c = lca(a, b);
    return lev[a] - lev[c] + lev[b] - lev[c];
}

int main()
{

    // first run reset(n)

    // create adjacency list and call binary_lifting(n)

    return 0;
}