// https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            cout << char(i + 'a') << nl;
            return 0;
        }
    }
    cout << "None" << nl;
    return 0;
}