#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> r, m ;
        vector <int > ans ;
           int i =0 ;                                   // ransom note solution too .
                    int j =0 ;
                    int n = r.size();
                    int x = m .size();
                    sort(r.begin(),r.end());
                    sort(m.begin(),m.end());
                    string ans ; 
                    while ( i <n && j < x){
                        if(r[i]<m[j]) i++;
                        else if (r[i]>m[j])j++;
                        else {
                            ans.push_back(r[i]);
                            i++;
                            j++;
                        }
                    }
                    return ans==r;
    return 0;
}
