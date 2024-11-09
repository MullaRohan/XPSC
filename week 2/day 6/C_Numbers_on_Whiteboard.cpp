// Date: 09-11-2024 at 00:48 BST
// Link: https://codeforces.com/problemset/problem/1430/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    cout << 2 << nl;
    while (v.size() > 1)
    {
        int a = v[v.size() - 1], b = v[v.size() - 2];
        int x = (a + b + 1) / 2;
        cout << v.back() << " ";
        v.pop_back();
        cout << v.back() << nl;
        v.pop_back();
        v.push_back(x);
    }

    // for (auto [x, y] : ans)
    //     cout << x << " " << y << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}