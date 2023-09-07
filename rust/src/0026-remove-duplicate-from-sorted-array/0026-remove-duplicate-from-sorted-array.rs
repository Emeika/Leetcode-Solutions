impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        // Check if the input vector is empty
        if nums.is_empty() {
            return 0; // If empty, return 0 (no duplicates to remove)
        }

        let mut j = 1; // Initialize a counter for unique elements at position 1
        for i in 1..nums.len() {
            // Iterate through the vector starting from the second element (index 1)

            // Check if the current element is different from the previous element
            if nums[i] != nums[i - 1] {
                // If different, it's a new unique element

                // Store the unique element at position j and increment j
                nums[j] = nums[i];
                j += 1;
            }
        }

        // Return the count of unique elements (j) as an i32
        j as i32
    }
}
