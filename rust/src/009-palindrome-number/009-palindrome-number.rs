/*
Given an integer x, return true if x is a
palindrome, and false otherwise.


Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left

*/

impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if x < 0 {
            return false;
        }
        let mut remaining = x;
        let mut rev: i32 = 0;

        while remaining > 0 {
            let mut last = remaining % 10;
            remaining /= 10;
            rev = rev * 10 + last;
        }

        rev == x
    }
}
