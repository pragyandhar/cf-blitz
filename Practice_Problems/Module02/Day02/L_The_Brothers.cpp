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
    string n1, n2;
    string p12, p22;
    cin >> n1;
    cin >> n2;
    cin >> p12;
    cin >> p22;
    // Logic
    if (n2 == p22)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
