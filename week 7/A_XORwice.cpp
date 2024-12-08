// Date: 08-12-2024 at 09:17 BST
// Link: https://codeforces.com/problemset/problem/1421/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b;
    cin >> a >> b;

    cout << (a ^ b) << nl;
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