/*
Given an integer n, return an array ans of length n + 1
such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/

#include <vector>
#include <bitset>

class Solution
{
public:
    std::vector<int> countBits(int n)
    {
        std::vector<int> ans(n + 1, 0);

        for (int i = 0; i <= n; i++)
        {
            ans[i] = std::bitset<32>(i).count(); // Count set bits and store in ans
        }

        return ans;
    }
};
