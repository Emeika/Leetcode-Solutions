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
struct Solution;

impl Solution {
    pub fn count_bits(n: i32) -> Vec<i32> {
        let mut ans = vec![0; (n + 1) as usize];

        for i in 0..=n {
            ans[i as usize] = i.count_ones() as i32;
        }

        ans
    }
}

fn main() {
    let n = 5;
    let result = Solution::count_bits(n);
    println!("{:?}", result);
}
