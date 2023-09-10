/*
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

*/

struct Solution;
impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let mut ans = nums.clone();
        ans.extend(ans.clone());
        ans
    }
}

fn main() {
    let nums: Vec<i32> = [1, 2, 1].to_vec();
    let res = Solution::get_concatenation(nums);
    println!("{:?}", res);
}
