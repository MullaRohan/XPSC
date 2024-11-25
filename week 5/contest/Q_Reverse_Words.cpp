// Date: 25-11-2024 at 19:45 BST
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        string k = word;
        reverse(k.begin(), k.end());
        cout << " " << k;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}