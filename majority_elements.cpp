class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int n  = nums.size();                       //optimal: given majority element must exist 
                                                        // else we check that candidate is occuring more than N/2 times 
            int candidate ;
            int votes=0;
            for( int i = 0 ; i < n ; i++){
                if ( votes==0) {
                    candidate=nums[i];
                    votes++;
                }
                else if ( candidate== nums[i]) votes++;
                else votes--;

            }

            return candidate;
    }
};


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute method : using two for loop to check which element is greater than n/2.

    // better : using unordered map , to find frequency .
    return 0;
}