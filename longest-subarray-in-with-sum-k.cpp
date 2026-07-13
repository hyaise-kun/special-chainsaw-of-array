
// brute solution  : find all subarray and match or smth

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 1, 1, 1, 2, 3};
//     int k = 4;

//     int n = arr.size();
//     int maxLen = 0;

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += arr[j];

//             if (sum == k) {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//         }
//     }

//     cout << maxLen << endl;
// }

// 12 /7/26 -> old code

// better solution
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n ,k ;
    cin >> n >>k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
      unordered_map<int ,int > mpp;
mpp[0]=0;

    
    int Presum =  0 ; 
    int ans = 0 ; 
    for (int  i = 0; i < n; i++)
    {

       Presum+=v[i];
       if(mpp.find(Presum-k)!=mpp.end()){
              ans = max  (ans , (i+1)-mpp[Presum-k]);
       }

       if(mpp.find(Presum)==mpp.end()) mpp[Presum]=i+1;


    }
    

    cout << ans <<endl; 
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