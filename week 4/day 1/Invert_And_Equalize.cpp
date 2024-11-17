// Date: 17-11-2024 at 17:11 BST
// Link: https://www.codechef.com/problems/INVEQ
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
    int zeros = 0, ones = 0;
    int chk = -1;
    for (int i = 0; i < n; i++)
    {
        if (chk != s[i] && s[i] == '0')
        {
            zeros++;
            chk = s[i];
        }
        if (chk != s[i] && s[i] == '1')
        {
            ones++;
            chk = s[i];
        }
    }
    cout << min(zeros, ones) << nl;
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