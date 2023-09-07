class Solution(object):
    def minimumReplacement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        answer = 0
        n = len(nums)

        # Start from the second last element, as the last one is always sorted.
        for i in range(n - 2, -1, -1):
            # current element is greater than the previous element
            if nums[i] > nums[i + 1]:   
                # Count how many elements are made from breaking nums[i].
                num_elements = (nums[i] + nums[i + 1] - 1) // nums[i + 1]
                
                # It requires numElements - 1 replacement operations.
                answer += num_elements - 1

                # Maximize nums[i] after replacement.
                nums[i] = nums[i] // num_elements

        return answer