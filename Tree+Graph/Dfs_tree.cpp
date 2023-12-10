
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll sr, vector<ll> adj[], ll par)
{
    for (auto &x : adj[sr])
    {
        if (x == par)
            continue;
        dfs(x, adj, sr);
    }
}

int main()
{

    return 0;
}