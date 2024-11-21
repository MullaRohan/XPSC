// Date: 21-11-2024 at 21:21 BST
// Link: https://codeforces.com/problemset/problem/1857/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i += --n)
        cout << v[i] << " ";
    cout << v[m - 1] << nl;
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