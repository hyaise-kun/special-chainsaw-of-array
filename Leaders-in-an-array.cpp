#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()



// brute : n^2 loop 

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans;
    int count = 0;
    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
        {
            ans.push_back(v[i]);
            maxi = max(maxi, v[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        /* code */ cout << ans[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}