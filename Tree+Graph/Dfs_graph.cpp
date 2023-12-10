
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll sr, ll pr, vector<ll> adj[], vector<ll> &lev)
{

    for (auto x : adj[sr])
    {
        if (x == pr)
            continue;

        lev[x] = lev[sr] + 1;
        dfs(x, sr, adj, lev);
    }
}

int main()
{

    return 0;
}