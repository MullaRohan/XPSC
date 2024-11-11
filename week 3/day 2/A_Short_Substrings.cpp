// Date: 11-11-2024 at 11:54 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s, sk;
    cin >> s;
    sk.push_back(s[0]);
    int i = 1;
    while (i < s.size())
    {
        if (i >= s.size())
            break;
        if (s[i] == s[i + 1])
        {
            sk.push_back(s[i]);
            i += 2;
        }
        else
        {
            sk.push_back(s[i]);
            i++;
            if (i < s.size())
                sk.push_back(s[i]);
        }
    }
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