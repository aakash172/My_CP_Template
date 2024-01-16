/**
*           author: aakash_172
*           created: 2024-01-16    01:34:27
**/


/* ..........................................................................................................*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>using moset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O2")
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")

/* ..........................................................................................................*/
typedef long long       ll;
typedef pair<ll, ll>    pll;
typedef vector<ll>      vl;
typedef vector<vl>      vvl;
typedef vector<bool>    vb;
typedef vector<vb>      vvb;
typedef vector<pll>     vpll;
typedef map<ll, ll>     mll;
typedef map<char, ll>   mcl;

#define endl                        "\n"
#define fastout                     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define maxv(v)                     *max_element(v.begin(), v.end())
#define minv(v)                     *min_element(v.begin(), v.end())
#define maxa(arr, n)                *max_element(arr, arr + (n))
#define mina(arr, n)                *min_element(arr, arr + (n))
#define SET(a, b)                   memset(a, b, sizeof(a))
#define ff                          first
#define ss                          second
#define pb                          push_back
#define pp                          pop_back()
#define sz                          size()
#define tp                          top()
#define ft                          front()
#define ALL(v)                      v.begin(), v.end()
#define SORT(v)                     sort(ALL(v))
#define REVERSE(v)                  reverse(ALL(v))

#define YES                         cout << "YES" << endl
#define Yes                         cout << "Yes" << endl
#define yes                         cout << "yes" << endl
#define NO                          cout << "NO" << endl
#define No                          cout << "No" << endl
#define no                          cout << "no" << endl
#define nl                          cout << endl
#define rt                          return
#define pr(x)                       cout<<(x)<<endl;


/* Debugging Only for Local Machine */

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << ": ";show(x); cerr << endl;
#else
#define debug(x)
#endif

void show(ll t) { cerr << t; }
void show(int t) { cerr << t; }
void show(string t) { cerr << t; }
void show(char t) { cerr << t; }
void show(double t) { cerr << t; }
void show(unsigned long long t) { cerr << t; }

template <class T, class V>void show(pair<T, V> p);
template <class T>void show(vector<T> v);
template <class T>void show(set<T> v);
template <class T, class V>void show(map<T, V> v);
template <class T>void show(multiset<T> v);
template <class T, class V>void show(pair<T, V> p) { cerr << "{";show(p.ff); cerr << ",";show(p.ss); cerr << "}"; }
template <class T>void show(vector<T> v) { cerr << "[ ";for (T i : v) { show(i);cerr << " "; } cerr << "]"; }
template <class T>void show(set<T> v) { cerr << "[ ";for (T i : v) { show(i);cerr << " "; }cerr << "]"; }
template <class T>void show(multiset<T> v) { cerr << "[ "; for (T i : v) { show(i);cerr << " "; }cerr << "]"; }
template <class T, class V>void show(map<T, V> v) { cerr << "[ ";for (auto i : v) { show(i);cerr << " "; }cerr << "]"; }
/*-------------------------------------------------------------------------------------------------------------------------------------*/

template <typename T>istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v)is >> i;return is; }
template <typename T>ostream& operator<<(ostream& os, vector<T> v) { for (auto& i : v)os << i << ' ';return os; }
template <typename T, typename U>istream& operator>>(istream& is, pair<T, U>& p) { is >> p.first >> p.second;return is; }
template <typename T, typename U>ostream& operator<<(ostream& os, pair<T, U> p) { os << p.first << ' ' << p.second;return os; }

/*-------------------------------------------------------------------------------------------------------------------------------------*/

const ll MOD = 1e9 + 7;
const ll inf = 1e18;

/*-------------------------------------------------------------------------------------------------------------------------------------*/
ll smult(ll x, ll y) { if (x > (inf / (y + 1))) { return inf; } return min(x * y, inf); }
ll modPower(ll a, ll b, ll m) { ll ans = 1; a = a % m; if (a == 0) return 0; while (b > 0) { if (b & 1) ans = (ans * a) % m; b = b >> 1; a = (a * a) % m; } return ans; }
ll modulo_inverse(ll n, ll m) { return modPower(n, m - 2, m); }
ll mod_add(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll mod_sub(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll mod_div(ll a, ll b, ll m) { a = a % m; b = b % m; return (mod_mul(a, modulo_inverse(b, m), m) + m) % m; }

/*-------------------------------------------------------------------------------------------------------------------------------------*/

/*Main Code start from here*/




void solve()
{
    ll n;
    cin >> n;
}



int main()
{
    fastout;

    //   #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r" , stdin);
    //     freopen("output.txt", "w", stdout);
    //  #endif

    int TC = 1;
    cin >> TC;
    for (int i = 1; i <= TC; i++)
    {

        // cout<<"Case "<<i<<": ";

        solve();


    }

    return 0;
}
