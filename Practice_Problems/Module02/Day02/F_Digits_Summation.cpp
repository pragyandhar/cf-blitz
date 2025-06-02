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

void solve()
{
    // Solution of the Question
    // Input
    int n;
    int m;
    cin >> n >> m;
    // Logic
    int ans = n + m;
    ans = ans % 10;
    cout << ans << endl;
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
