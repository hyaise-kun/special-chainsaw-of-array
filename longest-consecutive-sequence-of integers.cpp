#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // brute :finding and update longest 

// int longest = 1 ;
// int count = 0 ; 
// int x = 0 ; 
// for (int i = 0; i < n; i++)
// {
//         x = v[i];
//         count=1;
//         while(find(all(v) , x+1)!=v.end()){
//             count++;
//             x++;
//         }

//         longest= max ( longest , count ) ; 
// }





// better : sort and find 
// sort(all(v));
// int cnt = 1 ;
// int lastsmaller = INT_MIN;
// int longest = 1 ; 

// for (int  i = 0; i <n; i++)
// {
//         if(v[i]-1==lastsmaller){
//             lastsmaller= v[i];
//             cnt++;

//         }
//         else {
//             cnt =1 ;
//             lastsmaller= v[i];
//         }
//         longest= max( longest , cnt );
// }





// OPTIMAL 



int longest = 0 ; 
unordered_set<int>st ; 
for (int  i = 0; i < n; i++)
{
        st.insert(v[i]);
}



for(auto x : st ){
    if(st.find(x-1)==st.end()){
        int cnt = 1 ;
        int it = x ; 
        while (st.find(it+1)!=st.end())
        {
          cnt++;
          it++;
        }
        
        longest=max(longest,cnt);
    }


   
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