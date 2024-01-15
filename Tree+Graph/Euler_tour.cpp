/**
*           author: aakash_172
*           created: 2024-01-10    04:19:27
**/


#include<bits/stdc++.h>
using namespace std;
#define ll long long



const ll N = 3e5 + 10;
vector<ll>adj[N + 1];
vector<ll>startt;
vector<ll>endt;
ll timer;

vector<ll>col;

void reset(ll n) {
    for (int i = 0;i <= n;i++) {
        adj[i].clear();
    }
    col.assign(n + 1, 0);
    endt.assign(n + 1, 0);
    startt.assign(n + 1, 0);
    timer = 1;

}

void addEdge(ll a, ll b) {
    adj[a].push_back(b);
    // adj[b].push_back(a);
}

void eulerTour(ll src) {
    startt[src] = timer++;
    for (auto& x : adj[src]) {
        eulerTour(x);
    }
    endt[src] = timer - 1;

}


int main() {

    return 0;
}