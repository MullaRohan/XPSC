#include <bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[100001];
int num;

void add(int x)
{
    cnt[x]++;
    if (cnt[x] == 1)
        num++;
}

void remov(int x)
{
    cnt[x]--;
    if (cnt[x] == 0)
        num--;
}
int k;
bool good()
{
    return num <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0;
    ll res = 0;
    for (int r = 0; r < n; r++)
    {
        add(v[r]);
        while (!good())
        {
            remov(v[l]);
            l++;
        }
        res += r - l + 1;
    }
    cout << res << endl;
    return 0;
}