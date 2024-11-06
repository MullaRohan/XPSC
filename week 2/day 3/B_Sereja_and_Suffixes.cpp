// https://codeforces.com/problemset/problem/368/B

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
    vector<int> v(n + 1), vec(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    set<int> st;
    for (int i = v.size() - 1; i > 0; i--)
    {
        st.insert(v[i]);
        vec[i] = st.size();
        // cout << v[i] << " " << st.size() << nl;
    }
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cout << vec[x] << nl;
    }
    return 0;
}