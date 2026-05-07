
//brute solution  : find all subarray and match or smth 

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



//better solution 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> arr = {1, 2, 1, 1, 1, 2, 3};
      int n = arr.size();
    int k = 4;
    map<int,int> mp;
    int sum =0 ;
    int maxlength=0;
    for (int  i = 0; i < n; i++)
    {
            sum+=arr[i];
            if(sum==k) maxlength=max(maxlength,i+1);
            int rem= sum - k ; 
            if(mp.find(rem)!=mp.end()) {
               int len = i-mp[rem];
             maxlength=max(maxlength,len);
              
            }
             mp[sum]=i;
    }
    cout<<maxlength;
    return 0;
}