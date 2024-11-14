// Date: 14-11-2024 at 15:52 BST
// Link: https://codeforces.com/problemset/problem/1690/D
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0;
    int maxCol = INT_MAX, jus = 0;
    while (r < n)
    {
        if (s[r] == 'W')
            jus++;
        if (r - l + 1 == k)
        {
            maxCol = min(maxCol, jus);
            // cout << jus << nl;
            if (s[l] == 'W')
                jus--;
            l++;
        }
        r++;
    }
    cout << maxCol << nl;
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