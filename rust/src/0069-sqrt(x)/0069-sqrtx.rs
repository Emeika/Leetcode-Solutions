struct Solution;
impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x == 0 || x == 1 {
            return x;
        }
        let mut first = 1;
        let mut last = x;

        while first <= last {
            let mid = first + (last - first) / 2;
            if mid == x / mid {
                return mid;
            } else if mid > x / mid {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
        return last;
    }
}

fn main() {
    let x = 16;
    let result = Solution::my_sqrt(x);
    print!("{}", result);
}
