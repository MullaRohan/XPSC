// Date: 25-11-2024 at 12:33 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
class solution
{
public:
    int longestKsubstr(string &s, int k)
    {
        int n = s.size(), l = 0, r = 0, ans = 0;
        set<int> ml;
        multiset<int> st;
        while (r < n)
        {
            ml.insert(s[r]);
            st.insert(s[r]);
            while (ml.size() > k)
            {
                st.erase(st.find(s[l]));
                if (st.count(s[l]) == 0)
                    ml.erase(s[l]);
                l++;
            }
            if (ml.size() == k)
                ans = max(ans, r - l + 1);
            r++;
        }
        if (ans == 0)
            return -1;
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int k, ans;
    cin >> s >> k;
    solution sl;
    ans = sl.longestKsubstr(s, k);
    cout << ans << nl;
    return 0;
}