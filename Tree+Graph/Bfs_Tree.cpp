
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

void bfs(ll x, ll y, vector<vector<ll>> &dist, vector<vector<ll>> &mat)
{
    int n = dist.size(), m = dist[0].size();
    queue<pair<ll, ll>> q;
    q.push({x, y});
    dist[x][y] = 0;
    while (!q.empty())
    {
        auto x = q.front().first;
        auto y = q.front().second;
        q.pop();

        vector<pair<int, int>> move = {{1, 0},
                                       {0, 1},
                                       {-1, 0},
                                       {0, -1}};

        for (auto &mv : move)
        {
            int i = x + mv.first;
            int j = y + mv.second;
            if (i > n || j > m || j < 1 || i < 1)
                continue;
            if (dist[i][j] > dist[x][y] + 1)
            {
                dist[i][j] = dist[x][y] + 1;
                q.push({i, j});
            }
        }
    }
}

int main()
{

    return 0;
}