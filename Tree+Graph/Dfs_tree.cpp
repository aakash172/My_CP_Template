
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll sr, vector<ll> adj[], ll par)
{
    for (auto &x : adj[sr])
    {
        if (x == par)
            continue;
        dfs(sr, adj, par);
    }
}

int main()
{

    return 0;
}