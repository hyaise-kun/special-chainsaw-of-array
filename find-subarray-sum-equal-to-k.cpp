// optimal 


int pr(int arr[] , int n   , int k ) {

unordered_map<int, int > mpp;
mpp[0]=1;


int presum = 0 ; 
int cnt = 0 ; 

for (int  i = 0; i < n; i++)
{
   presum+=arr[i];
   int remove = presum-k; 
cnt+=mpp[remove] ; 

mpp[presum] ++; 
   
}

return  cnt ; 

}
// prefix-sum 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}