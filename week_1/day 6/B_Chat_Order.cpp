// https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp[v[i]])
        {
            cout << v[i] << nl;
            mp[v[i]] = true;
        }
    }
    return 0;
}