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

void solve() {
    // Solution of the Question
    // Input
    int n;
    cin >> n;
    // Logic
    int result = ((n % 2 == 0) ? (n+1)/2 : -(n+1)/2);
    cout << result << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--) {
    solve();
    // }

    return 0;
}
