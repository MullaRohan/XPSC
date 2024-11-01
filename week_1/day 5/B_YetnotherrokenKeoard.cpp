// https://codeforces.com/problemset/problem/1907/B

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
        string s;
        cin >> s;
        stack<int> up, low;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z')
                low.push(i);
            if (s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z')
                up.push(i);
            if (s[i] == 'B' && !up.empty())
            {
                s[up.top()] = '1';
                up.pop();
            }
            if (s[i] == 'b' && !low.empty())
            {
                s[low.top()] = '1';
                low.pop();
            }
        }
        for (char ch : s)
            if (ch != '1' && ch != 'b' && ch != 'B')
                cout << ch;
        cout << nl;
    }
    return 0;
}