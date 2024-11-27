// Date: 27-11-2024 at 09:26 BST
// Link: https://codeforces.com/problemset/problem/1747/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cout << (n + 1) / 2 << nl;
    int i = 1, j = 3 * n;
    while (i < j)
    {
        cout << i << " " << j << " ";
        i += 3;
        j -= 3;
    }
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