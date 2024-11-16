// Date: 16-11-2024 at 20:09 BST
// Link: https://codeforces.com/problemset/problem/1840/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> t(n);
        int pd = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if (t[i] <= q)
                pd++;
            else
                pd = 0;
            ans += max(0, pd - k + 1);
        }
        cout << ans << endl;
    }
    return 0;
}