// Date: 25-11-2024 at 19:58 BST
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s, sk;
    cin >> s >> sk;
    int n = max(s.size(), sk.size());
    for (int i = 0; i < n; i++)
    {
        if (i < s.size())
            cout << s[i];
        if (i < sk.size())
            cout << sk[i];
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