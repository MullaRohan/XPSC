// Date: 12-12-2024 at 21:10 BST
// Link: https://codeforces.com/problemset/problem/1860/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    string s, a = "", b = "";
    cin >> s;
    for (int i = 1; i <= s.size(); i++)
        a += '(';
    for (int i = 1; i <= s.size(); i++)
        a += ')';
    for (int i = 0; i < s.size(); i++)
        b += "()";
    if (a.find(s) == string::npos)
        cout << "YES" << nl << a << nl;
    else if (b.find(s) == string::npos)
        cout << "YES" << nl << b << nl;
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