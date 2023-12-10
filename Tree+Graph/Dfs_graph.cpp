
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll sr, ll pr, vector<ll> adj[], vector<ll> &vis)
{

    vis[sr] = true;

    for (auto x : adj[sr])
    {
        if (vis[x])
            continue;

        dfs(x, sr, adj, vis);
    }
}

int main()
{

    return 0;
}