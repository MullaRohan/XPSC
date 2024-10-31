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
        int n;
        cin >> n;
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> v(4);
        for (auto [x, y] : mp)
        {
            if (y.size() == 1)
                v[y[0]] += 3;
            else if (y.size() == 2)
            {
                v[y[0]] += 1;
                v[y[1]] += 1;
            }
        }
        for (int i = 1; i <= 3; i++)
            cout << v[i] << " ";
        cout << nl;
    }
    return 0;
}