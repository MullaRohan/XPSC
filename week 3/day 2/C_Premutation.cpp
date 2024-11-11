// Date: 10-11-2024 at 23:30 BST
// Link: https://codeforces.com/problemset/problem/1790/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, i, j, m;
    cin >> n;
    ll ans[n + 1];

    vector<ll> pos[n + 1];

    m = n;

    for (; m--;)
    {
        for (i = 1; i <= n - 1; i++)
        {
            cin >> j;

            pos[j].push_back(i);
        }
    }

    for (i = 1; i <= n; i++)
    {
        sort(pos[i].begin(), pos[i].end());
    }

    for (i = 1; i <= n; i++)
    {
        if (pos[i][n - 2] == n - 1)
        {
            if (pos[i][0] == n - 1)
            {
                ans[n] = i;
            }
            else
            {
                ans[n - 1] = i;
            }
        }
        else
        {
            ans[pos[i][n - 2]] = i;
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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