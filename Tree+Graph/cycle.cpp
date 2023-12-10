// C++ program to print all the cycles
// in an undirected graph
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100000;

vector<int> graph[N];

void dfs_cycle(int u, int p, vector<ll> color, vector<ll> par, vector<vector<ll>> &cycles)
{

    if (color[u] == 2)
    {
        return;
    }

    if (color[u] == 1)
    {
        vector<ll> v;

        int cur = p;
        v.push_back(cur);

        while (cur != u)
        {
            cur = par[cur];
            v.push_back(cur);
        }
        cycles.push_back(v);
        return;
    }
    par[u] = p;

    color[u] = 1;

    for (int v : graph[u])
    {

        if (v == par[u])
        {
            continue;
        }
        dfs_cycle(v, u, color, par, cycles);
    }

    color[u] = 2;
}

int main()
{
}
