/**
 *           author: aakash_172
 *           created: 2023-07-31    16:28:06
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> vec;

ll get_answer; // to store current answer

void remove(ll idx){
    // after removing idx update effect of idx
};

void add(ll idx){
    // after adding idx update effect of idx
};

ll block_size;

struct Query
{
    ll l, r, idx;

    bool operator<(Query &other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};
bool cmp(Query &p, Query &q)
{
    if (p.l / block_size != q.l / block_size)
        return p < q;
    return (p.l / block_size & 1) ? (p.r < q.r) : (p.r > q.r);
}
vector<ll> mo_s_algorithm(vector<Query> &queries)
{
    ll n = queries.size();
    block_size = sqrt(n);
    vector<ll> answers(n);
    sort(queries.begin(), queries.end(), cmp);

    ll cur_l = 0;
    ll cur_r = -1;

    for (Query q : queries)
    {
        while (cur_l > q.l)
        {
            cur_l--;
            add(cur_l);
        }
        while (cur_r < q.r)
        {
            cur_r++;
            add(cur_r);
        }
        while (cur_l < q.l)
        {
            remove(cur_l);
            cur_l++;
        }
        while (cur_r > q.r)
        {
            remove(cur_r);
            cur_r--;
        }
        answers[q.idx] = get_answer;
    }
    return answers;
}

int main()
{
    // upadate main function according to your need
    ll n, q;
    cin >> n >> q;
    vec.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<Query> que(q);
    get_answer = 0;
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        que[i] = {l - 1, r - 1, i};
    }
    vector<ll> ans = mo_s_algorithm(que);
    for (auto x : ans)
    {
        cout << x << endl;
    }
    return 0;
}