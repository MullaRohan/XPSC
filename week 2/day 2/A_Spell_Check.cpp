// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s = "urmiT", sk;
    cin >> sk;
    sort(sk.begin(), sk.end(), greater<char>());
    cout << ((sk == s) ? "YES" : "NO") << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}