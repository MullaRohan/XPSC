// Date: 20-11-2024 at 10:58 BST
// Link: https://codeforces.com/problemset/problem/1729/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll n1 = a - 1;
    if (a == 1)
    {
        cout << 1 << nl;
        return;
    }
    ll n2 = abs(c - b) + abs(c - 1);
    if (n1 < n2)
        cout << 1 << nl;
    else if (n1 > n2)
        cout << 2 << nl;
    else
        cout << 3 << nl;
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