// https://codeforces.com/contest/918/problem/B

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    cin.ignore();
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[b] = a;
    }
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        b.pop_back();
        cout << a << " " << b << ";" << " #" << mp[b] << nl;
    }
    return 0;
}