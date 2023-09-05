
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void bfs(ll sr, vector<ll> adj[], vector<ll> &dist)
{
    queue<ll> q;
    q.push(sr);
    dist[sr] = 0;
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();
        for (auto &ch : adj[node])
        {
            if (dist[ch] > dist[node] + 1)
            {
                dist[ch] = dist[node] + 1;
                q.push(ch);
            }
        }
    }
}

int main()
{

    return 0;
}