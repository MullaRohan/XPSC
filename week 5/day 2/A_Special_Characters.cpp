// Date: 26-11-2024 at 14:08 BST
// Link: https://codeforces.com/problemset/problem/1948/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    char k = 'A';
    for (int i = 1; i <= n / 2; i++)
    {
        cout << k << k;
        k++;
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