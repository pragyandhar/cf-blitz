// Author: Dhar
// Grandmaster Competitive Programming Template (Explicit Includes)

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <bitset>
#include <numeric>
#include <limits>
#include <iomanip>
#include <functional>
#include <tuple>

using namespace std;

// Aliases
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Constants
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 2e5 + 5;

// Fast IO
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Debugging Macro
#ifdef LOCAL
#define dbg(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

// Debug print functions
void _print(int x) { cerr << x; }
void _print(ll x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(ld x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

template<class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "["; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T> void _print(set<T> v) { cerr << "["; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T, class V> void _print(map<T, V> v) { cerr << "["; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]"; }
template<class T> void _print(multiset<T> v) { cerr << "["; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]"; }

// Modular Arithmetic
ll mod_add(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a + b + m) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a - b + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a * b) % m; }
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m - 2, m); }

// GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Main Solve Function
void solve() {
    // Solution here
    // Inputs
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Logic
    vector<ll> copy_a = a;
    sort(copy_a.begin(), copy_a.end());

    // Output
    if (copy_a == a || k > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

// Main Driver
int main() {
    fast_io();

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
