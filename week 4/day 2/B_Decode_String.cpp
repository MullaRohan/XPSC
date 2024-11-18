// Date: 18-11-2024 at 16:57 BST
// Link: https://codeforces.com/problemset/problem/1729/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s, sk;
    cin >> s;
    int i = n - 1;
    for (int i = n - 1; i >= 0;)
    {
        if (s[i] != '0')
        {
            sk += char((s[i] - '0') + 96);
            i--;
        }
        else
        {
            int fst = ((s[i - 2] - '0') * 10) + (s[i - 1] - '0');
            sk += char(fst + 96);
            i -= 3;
        }
    }
    reverse(sk.begin(), sk.end());
    cout << sk << nl;
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