class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        outputlist = []
        for i in nums:
            if i not in outputlist:
                outputlist.append(i)
            
        k = len(outputlist)
        remain = len(nums) - k
        for i in range(remain):
            outputlist.append(0)
        nums[:] = outputlist[:]
        return k
