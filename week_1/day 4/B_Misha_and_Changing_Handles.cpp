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
    map<string, string> orig, dup;
    while (test--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (dup.find(s1) != dup.end())
        {
            // paichi
            string sk = dup[s1];
            orig[sk] = s2;
            dup.erase(s1);
            dup[s2] = sk;
        }
        else
        {
            // paini
            orig[s1] = s2;
            dup[s2] = s1;
        }
    }
    cout << dup.size() << nl;
    for (auto [x, y] : orig)
        cout << x << " " << y << nl;
    return 0;
}
