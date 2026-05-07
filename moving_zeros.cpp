#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{ // brute force.
   int n;
   cin >> n;
   int arr[n];
   vector<int> v;
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
      if (arr[i] != 0)
         v.push_back(arr[i]);
   }

   int d = v.size();

   for (int i = 0; i < n; i++)
   {
      if (i < d)
         arr[i] = v[i];
      else
         arr[i] = 0;
   }

   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}