#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n ; 
cin >> n ; 
vector <int> v(n);
 for (int  i = 0; i < n; i++)
 {
    cin >>v[i];
 }
 
 int d ; 
 cin >>d;
 d=d%n;

 reverse(v.begin(),v.begin()+d);
 
reverse(v.begin()+d , v.end());
reverse(v.begin(),v.end());
for (int  i = 0; i < n; i++)
{
    cout <<v[i] <<" "; 
}


 
    return 0;
}