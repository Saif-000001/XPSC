#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;
 
int t;
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(101);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for (int i = 0; i < 101; i++)
        ans = max(ans, cnt[i]);
    cout<<ans<<"\n";
}
 
int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}