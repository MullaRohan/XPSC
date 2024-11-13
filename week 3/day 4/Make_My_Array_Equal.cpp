// Date: 13-11-2024 at 00:18 BST
// Link: https://www.codechef.com/problems/MEBA?tab=statement
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
            s.insert(v[i]);
    }
    if (s.size() < 2)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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