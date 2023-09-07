class Solution
{
public:
    long long minimumReplacement(vector<int> &nums)
    {
        int n = nums.size();
        long long answer = 0; // to avoid signed integer overflow
        // Start from the second last element, as the last one is always sorted.
        for (int i = (n - 2); i >= 0; i--)
        {
            if (nums[i] > nums[i + 1])
            {
                // Count how many elements are made from breaking nums[i].
                int num_elements = ((nums[i] + nums[i + 1] - 1) / (nums[i + 1]));
                answer += num_elements - 1;
                nums[i] = nums[i] / num_elements;
            }
        }
        return answer;
    }
};