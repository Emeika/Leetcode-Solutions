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

class Solution
{
public:
    bool isPalindrome(int x) // 121
    {
        if (x < 0)
        {
            return false;
        }
        int last = 0;
        int remaining = x;
        long rev = 0;
        while (remaining > 0)
        {
            last = remaining % 10;
            remaining /= 10;
            rev = rev * 10 + last;
        }
        if (rev == x)
        {
            return true;
        }
        return false;
    }
};

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string str_x = to_string(x);

        if (str_x[0] == '-')
        {
            return false;
        }
        int n = str_x.length();
        for (int i = 0; i < n; i++)
        {
            char first = str_x[i];
            char last = str_x[n - i - 1];
            if (first != last)
            {
                return false;
            }
        }
        return true;
    }
};