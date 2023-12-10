
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mbit = 20;
const ll N = 1e5 + 7;

ll lev[N];
ll parent[N][mbit + 1];
vector<ll> adj[N];

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

void dfs_cycle(int sr, int p, vector<ll> &color, vector<ll> &par, vector<vector<ll>> &cycles)
{

    if (color[sr] == 2)
    {
        return;
    }

    if (color[sr] == 1)
    {
        vector<ll> v;

        int cur = p;
        v.push_back(cur);

        while (cur != sr)
        {
            cur = par[cur];
            v.push_back(cur);
        }
        cycles.push_back(v);
        return;
    }
    par[sr] = p;

    color[sr] = 1;

    for (int x : adj[sr])
    {

        if (x == par[sr])
        {
            continue;
        }
        dfs_cycle(x, sr, color, par, cycles);
    }

    color[sr] = 2;
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

void reset(int n)
{
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        lev[i] = 0;
        for (int j = 0; j <= mbit; j++)
        {
            parent[i][j] = 0;
        }
    }
}

void addedge(ll a, ll b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main()
{

    return 0;
}