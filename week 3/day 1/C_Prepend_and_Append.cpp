// Date: 10-11-2024 at 16:41 BST
// Link: https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    while (s.size() > 1)
    {
        if (s[0] == s[s.size() - 1])
        {
            break;
        }
        s.erase(s.begin());
        if (!s.empty())
            s.pop_back();
    }
    cout << s.size() << nl;
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