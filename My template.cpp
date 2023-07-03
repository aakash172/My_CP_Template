

/**
 *           author: aakash_172
 *           created: 2023-07-03    20:49:35    
 **/
/*----------------------------------------------------------------------------------------------------*/
/* Header Files -------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

/*----------------------------------------------------------------------------------------------------*/

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("bmi,bmi2,lzcnt,popcnt")
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")

/* Most common declaration of container -------------------------------------------------------------*/
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;
typedef map<char, ll> mcl;

/*Oredered Set----------------------------------------------------------------------------------------------------*/
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using moset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/* Templates for Algorithm----------------------------------------------------------------------------*/

#define endl "\n"
#define fastout                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define maxa(arr, n) *max_element(arr, arr + (n))
#define mina(arr, n) *min_element(arr, arr + (n))
#define FILL(v, n)              \
	for (int i = 0; i < n; i++) \
	{                           \
		cin >> v[i];            \
	}
#define loop(n) for (int(i) = 0; i < (n); i++)
#define loop1(n) for (int(i) = 1; i <= n; i++)
#define loops(i, n) for (int(i) = 1; i <= n; i++)
#define SET(a, b) memset(a, b, sizeof(a))
#define ff first
#define ss second
#define pb push_back
#define pp pop_back()
#define sz size()
#define tp top()
#define ft front()
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define div(a, b) ((a / b) + (a % b == 0 ? 0 : 1))

/*----------------------------------------------------------------------------------------------------*/

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl
#define no cout << "no" << endl
#define pria(v, n)              \
	for (int I = 0; I < n; I++) \
	cout << (v)[I] << " "
#define priv(v)       \
	for (auto &x : v) \
	cout << x << " "
#define nl cout << endl
#define rt return

/*----------------------------------------------------------------------------------------------------*/

void pr(auto x)
{
	cout << x << endl;
}

/*----------------------------------------------------------------------------------------------------

1- Read and understand the question carefully..

----------------------------------------------------------------------------------------------------*/

const int MOD = 1e9 + 7;

/*Main Code start from here*/
void solve()
{
	ll n;
	cin >> n;

	//   string s;
	//   cin>>s;
	// ll arr[n];
	//  FILL(arr,n);
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
