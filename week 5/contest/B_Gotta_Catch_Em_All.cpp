// Date: 25-11-2024 at 21:06 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x;
        y = a * x;
        if (y < b)
            ans += y;
        else
            ans += b;
    }
    cout << ans << nl;
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