"""
Given an integer x, return true if x is a
palindrome, and false otherwise.


Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


"""

#Fastest Solution beats 96%
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x > 0:
            return False
        s = str(x)
        rev = s[::-1]
        if rev == s:
            return True
        return False

