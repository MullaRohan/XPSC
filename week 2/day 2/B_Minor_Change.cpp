// https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, sk;
    cin >> s >> sk;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != sk[i])
            cnt++;
    cout << cnt;
    return 0;
}