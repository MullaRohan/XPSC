// Date: 27-11-2024 at 10:22 BST
// Link: https://codeforces.com/problemset/problem/1806/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int zero = 0, nonZero = 0, maxEle = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            zero++;
        else
            nonZero++;
        maxEle = max(maxEle, x);
    }
    if (nonZero >= zero - 1)
    {
        cout << 0 << nl;
        return;
    }
    if (maxEle == 1)
        cout << 2 << nl;
    else
        cout << 1 << nl;
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