// Date: 25-11-2024 at 21:10 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll jar, eachSon;
    cin >> jar >> eachSon;
    ll minCookie = LLONG_MAX;
    for (int i = 0; i < jar; i++)
    {
        int x;
        cin >> x;
        if (x >= eachSon)
        {
            minCookie = min(minCookie, x % eachSon);
        }
    }
    if (minCookie == LLONG_MAX)
    {
        cout << -1 << nl;
        return;
    }
    cout << minCookie << nl;
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