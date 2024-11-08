// Date: 08-11-2024 at 12:13 BST
// Link: https://codeforces.com/problemset/problem/1793/C
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
        vector<int> v(n);
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ml.insert(v[i]);
        }
        int l = 0, r = n - 1;
        bool flag = true;
        while (l < r)
        {
            if (v[l] == *(ml.begin()) || v[l] == *(ml.rbegin()))
            {
                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            else if (v[r] == *ml.begin() || v[r] == *(ml.rbegin()))
            {
                auto it = ml.find(v[r]);
                ml.erase(it);
                r--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << nl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << -1 << nl;
    }
    return 0;
}