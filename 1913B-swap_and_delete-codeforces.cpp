#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int no_of_zeros = 0;
    int no_of_ones = 0;

    for (int i = 0; i < n; i++)
    {                                  // counting no. of ones and zeros
        if (s[i] == '1')
            no_of_ones++;
        else
            no_of_zeros++;
    }

    if (no_of_zeros == no_of_ones)
        cout << 0 << endl;                                    // from observations.
    else if (no_of_zeros == 0 || no_of_ones == 0)
        cout << n << endl;

    else
    {

        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1' && no_of_zeros > 0)
            {

                no_of_zeros--;
                count++;
            }
            else if (s[i] == '0' && no_of_ones > 0)
            {

                no_of_ones--;
                count++;
            }

            else                             // break when its impossible to place one or zero.
                break;
        }

        cout << n - count << endl;           // total length - no of replacements placed.
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;        // no of test_cases.

    while (t--)
    {
        solve();
    }

    return 0;
}