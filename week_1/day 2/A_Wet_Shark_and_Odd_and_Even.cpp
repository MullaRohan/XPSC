// https://codeforces.com/problemset/problem/621/A

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

    ll sum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum << nl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ll flag = sum - v[i];
            if (flag % 2 == 0)
            {
                cout << flag << endl;
                break;
            }
        }
    }

    return 0;
}