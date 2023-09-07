impl Solution {
    pub fn minimum_replacement(nums: Vec<i32>) -> i64 {
        let mut answer = 0;
        let mut last = *nums.last().unwrap();
        let n = nums.len();
        for i in (0..n - 1).rev() {
            if nums[i] > last {
                let num_elements = (nums[i] + last - 1) / last;
                answer += num_elements as i64 - 1;
                last = nums[i] / num_elements
            } else {
                last = nums[i]
            }
        }
        answer
    }
}
// OR
impl Solution {
    pub fn minimum_replacement(nums: Vec<i32>) -> i64 {
        let mut ans = 0;
        let mut last = *nums.last().unwrap();

        for &num in nums.iter().rev().skip(1) {
            if num > last {
                let i = (num + last - 1) / last;
                ans += i as i64 - 1;
                last = num / i;
            } else {
                last = num
            };
        }
        ans
    }
}
