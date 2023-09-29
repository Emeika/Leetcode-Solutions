/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/
#include <vector>

class Solution
{
private:
    void merge(std::vector<int> &nums, int p, int q, int r)
    {
        std::vector<int> temp(r - p + 1);
        int i = p;
        int k = 0;
        int j = q + 1;

        while (i <= q && j <= r)
        {
            if (nums[i] <= nums[j])
            {
                temp[k] = nums[i];
                i++;
            }
            else
            {
                temp[k] = nums[j];
                j++;
            }
            k++;
        }

        while (i <= q)
        {
            temp[k] = nums[i];
            k++;
            i++;
        }

        while (j <= r)
        {
            temp[k] = nums[j];
            k++;
            j++;
        }

        for (int i = 0; i < temp.size(); i++)
        {
            nums[p + i] = temp[i];
        }
    }

    void merge_sort(std::vector<int> &nums, int p, int r)
    {
        if (p < r)
        {
            int q = (p + r) / 2;
            merge_sort(nums, p, q);
            merge_sort(nums, q + 1, r);
            merge(nums, p, q, r);
        }
    }

public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        // Merge nums2 into nums1
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }

        // Perform merge sort to ensure non-decreasing order
        merge_sort(nums1, 0, m + n - 1);
    }
};
