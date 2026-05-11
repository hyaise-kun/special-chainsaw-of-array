#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n ; 
    vector<int>v(n);
    for (int  i = 0; i < n; i++)
    {
            cin>>v[i];                  // 0=<v[i]<=10000
    }
    int maxi = 0 ; 
    int low = v[0];
    for (int  i = 1; i < n; i++)
    {
            if(v[i]<low) low = v[i];
            else if ( v[i]>low){
                maxi=max(maxi , v[i]-low );       // profit calculations
            }
    }

    cout <<maxi ; 
    
    
    return 0;
}