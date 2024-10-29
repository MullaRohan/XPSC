// https://codeforces.com/problemset/problem/1927/A

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int strtIdx = -1, lstIdx = -1;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (strtIdx == -1)
                strtIdx = i;
            lstIdx = i;
        }
    }
    if (strtIdx == lstIdx)
        cout << 1 << nl;
    else
        cout << lstIdx - strtIdx + 1 << nl;
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