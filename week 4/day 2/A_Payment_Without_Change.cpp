// Date: 17-11-2024 at 17:35 BST
// Link: https://codeforces.com/problemset/problem/1256/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    int tmp = (d / c);
    if (tmp > a)
    {
        if (d - (a * c) <= b)
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO" << nl;
    }
    else
    {
        if (d % c <= b)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}