#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n  >>m;
    int A[n];
    int B[m];
    for (int i = 0; i < n; i++)
    {
            cin>>A[i];
    }
    for (int  i = 0; i < m; i++)
    {
            cin>>B[i];
    }
    vector<int> v(100,0);
    vector <int>ans;
    for (int  i = 0; i <n ; i++)
    {
            for (int j = 0; j < m; j++)
            {
                    if(A[i]==B[j] && v[j]==0  ){
                            ans.push_back(A[i]);
                            v[j]=1;
                            break ; 
                    }
                    if(B[j]>A[i]) break ; 
            }
            
    }
    
    for (int  i = 0; i <ans.size(); i++)
    {
        
        cout <<ans[i]<<" "; 
    }
    
    return 0;
}