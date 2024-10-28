// https://atcoder.jp/contests/abc214/submissions/me

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
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if ((i + j + k) <= n && (i * j * k) <= m)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}