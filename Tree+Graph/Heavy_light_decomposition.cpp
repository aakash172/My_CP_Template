
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5;
vector<ll> adj[N + 1];

ll heavy[N + 1], si[N + 1], depth[N + 1], parent[N + 1];
ll head[N + 1], pos[N + 1], lt[N + 1], idx;

void addedge(int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void dfs(ll sr, ll pr)
{
    for (auto &x : adj[sr])
    {
        depth[x] = depth[sr] + 1;
        parent[x] = sr;
        dfs(x, sr);
        si[sr] += si[x];
        if (si[x] > si[heavy[sr]])
        {
            heavy[sr] = x;
        }
    }
    si[sr]++;
}

void dfshld(ll sr, ll pr, ll chain)
{
    head[sr] = chain;
    pos[sr] = idx++;

    if (heavy[sr] != 0)
    {
        dfshld(heavy[sr], sr, chain);
    }

    for (auto &x : adj[sr])
    {
        if (x == pr || heavy[sr] == x)
            continue;

        dfshld(x, sr, x);
    }
}

int main()
{

    return 0;
}