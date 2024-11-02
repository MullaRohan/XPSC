// https://codeforces.com/contest/855/problem/A

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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] < 1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
        mp[s] += 1;
    }
    return 0;
}