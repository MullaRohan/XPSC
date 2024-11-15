// Date: 15-11-2024 at 07:48 BST
// Link: https://codeforces.com/problemset/problem/1741/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    char a = s1.back();
    char b = s2.back();
    // condition
    if (a == 'S' && (b == 'L' || b == 'M'))
        cout << "<" << nl;
    else if ((a == 'L' || a == 'M') && b == 'S')
        cout << ">" << nl;
    else if (a == 'S' && b == 'S')
    {
        if (s1.size() > s2.size())
            cout << "<" << nl;
        else if (s1.size() < s2.size())
            cout << ">" << nl;
        else
            cout << "=" << nl;
    }
    else if (a < b)
    {
        cout << ">" << nl;
    }
    else if (a > b)
        cout << "<" << nl;
    else
    {
        if (s1.size() > s2.size())
            cout << ">" << nl;
        else if (s1.size() < s2.size())
            cout << "<" << nl;
        else
            cout << "=" << nl;
    }
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