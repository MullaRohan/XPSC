// Date: 16-11-2024 at 19:13 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
// txt boto
// pat choto
class Solution
{
public:
    int search(string pat, string txt)
    {
        int t_size = txt.size(), p_size = pat.size();
        int cnt = 0;
        map<char, int> mp, np;
        for (auto x : pat)
            np[x]++;
        for (int i = 0; i < p_size; i++)
            mp[txt[i]]++;
        if (mp == np)
            cnt++;
        int l = 0, r = p_size;
        while (r < t_size)
        {
            mp[txt[l]]--;
            if (mp[txt[l]] == 0)
            {
                mp.erase(mp.find(txt[l]));
            }
            l++;
            mp[txt[r++]]++;
            if (mp == np)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string pat, txt;
    cin >> txt >> pat;
    Solution s;
    cout << s.search(pat, txt);
    return 0;
}