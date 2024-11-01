// https://codeforces.com/contest/4/problem/C

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
        mp[s] += 1;
        if (mp[s] > 1)
            cout << s << mp[s] - 1 << nl;
        else
            cout << "OK" << nl;
    }

    return 0;
}