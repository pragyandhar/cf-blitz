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
    vector<char> symbols = {'>', '<', '='};
    int n, m;
    char s; // Operator input
    cin >> n >> s >> m;

    // Logic
    if (s == '>') {
        if (n > m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (s == '<') {
        if (n < m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (s == '=') {
        if (n == m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else {
        cout << "Invalid operator" << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
