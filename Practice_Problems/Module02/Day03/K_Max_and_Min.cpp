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
    int a, b, c;
    cin >> a >> b >> c;
    // Logic
    if (a > b && a > c) {
        cout << min(b, c) << " " << a << endl;
    } else if (b > a && b > c) {
        cout << min(a, c) << " " << b << endl;
    } else if (c > a && c > b) {
        cout << min(a, b) << " " << c << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
