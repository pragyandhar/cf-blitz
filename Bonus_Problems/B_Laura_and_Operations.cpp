#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
using namespace std;

#define int long long
#define endl '\n'

using ll = long long;

ll isPossible(ll x, ll y, ll z)
{
    if (y % 2 == z % 2)
    {
        return 1;
    }
    return 0;
}

void solve()
{
    // Solution of the Question
    // Input
    ll a, b, c;
    cin >> a >> b >> c;
    // Logic
    int arr[3] = {0, 0, 0};
    arr[0] = isPossible(a, b, c);
    arr[1] = isPossible(b, a, c);
    arr[2] = isPossible(c, b, a);
    // Output
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
