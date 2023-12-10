
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll sr, vector<ll> adj[], vector<ll> &vis)
{
    vis[sr] = true;
    for (auto &x : adj[sr])
    {
        if (vis[x])
            continue;
        dfs(sr, adj, vis);
    }
}

int main()
{

    return 0;
}