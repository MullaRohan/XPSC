// Date: 09-11-2024 at 00:27 BST
// Link: https://codeforces.com/problemset/problem/1800/C1
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    multiset<ll> ml;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a == 0)
        {
            if (!ml.empty())
            {
                sum += *ml.rbegin();
                ml.erase(--ml.end());
            }
        }
        else
        {
            ml.insert(a);
        }
    }
    cout << sum << nl;
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