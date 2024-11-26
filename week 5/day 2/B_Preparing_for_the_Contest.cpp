// Date: 26-11-2024 at 21:15 BST
// Link: https://codeforces.com/problemset/problem/1914/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = n - k; i > 0; i--)
        cout << i << " ";
    for (int i = n - k + 1; i <= n; i++)
        cout << i << " ";
    cout << nl;
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