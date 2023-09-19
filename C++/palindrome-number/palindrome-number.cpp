/*
    Given an integer x,
    return true if x is a
        palindrome,
    and false otherwise.

        Example 1 :

    Input : x = 121 Output : true Explanation : 121 reads as 121 from left to right and from right to left.
*/

#include <string>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string str_x = std::to_string(x);
        string rev = str_x;
        reverse(rev.begin(), rev.end());
        if (rev == str_x)
        {
            return true;
        }
        return false;
    }
};
