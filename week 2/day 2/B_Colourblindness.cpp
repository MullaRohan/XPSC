// https://codeforces.com/problemset/problem/1722/B

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
    cin >> s >> sk;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            s[i] = 'B';
        if (sk[i] == 'G')
            sk[i] = 'B';
    }
    cout << ((sk == s) ? "YES" : "NO") << nl;
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