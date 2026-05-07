#include <iostream>
#include <bits/stdc++.h>
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    { // brute force
        int n = nums.size();
        vector<int> v = {0};
        int count = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }

            if (nums[i] == 0 || i == n - 1)
            {
                temp = count;
                count = 0;
            }

            if (temp != 0)
                v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int l = v.size();

        int k = v[l - 1];
        return k;
        return count;
    }
};

class Solution
{ // optimal approach
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxcount = max(maxcount, count);
            }
            else
                count = 0;
        }
        return maxcount;
    }
};

using namespace std;

int main()
{

    return 0;
}