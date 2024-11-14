// Date: 14-11-2024 at 22:24 BST
// Link: https://codeforces.com/problemset/problem/1722/D
#include <bits/stdc++.h>
#define null nullptr
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long total_distance = 0;
        vector<int> gains;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
            {
                total_distance += i;
                gains.push_back((n - 1 - i) - i);
            }
            else
            {
                total_distance += (n - 1 - i);
                gains.push_back(i - (n - 1 - i));
            }
        }
        sort(gains.rbegin(), gains.rend());
        for (int i = 0; i < n; ++i)
        {
            if (gains[i] > 0)
            {
                total_distance += gains[i];
            }
            cout << total_distance << " ";
        }
        cout << endl;
    }

    return 0;
}
