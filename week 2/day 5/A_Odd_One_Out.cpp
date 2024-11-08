// Date: 08-11-2024 at 22:08 BST
// Link: https://codeforces.com/problemset/problem/1915/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << c << nl;
        else if (a == c)
            cout << b << nl;
        else
            cout << a << nl;
    }
    return 0;
}