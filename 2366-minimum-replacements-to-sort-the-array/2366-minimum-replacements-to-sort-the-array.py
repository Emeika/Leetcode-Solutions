class Solution(object):
    def minimumReplacement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        last = nums[n - 1]
        k = 0

        for i in range(n - 2, -1, -1):
            if nums[i] > last:
                t = nums[i] // last
                if nums[i] % last:
                    t += 1
                last = nums[i] // t
                k += t - 1 
            else:
                last = nums[i]
        return k 
