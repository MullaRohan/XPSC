// Date: 16-11-2024 at 23:33 BST
// Link: https://www.codechef.com/problems/FOOTBALLTIES
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) % 3 << nl;
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