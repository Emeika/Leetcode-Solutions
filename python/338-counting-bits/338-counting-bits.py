"""
Given an integer n, return an array ans of length n + 1 
such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

"""

class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        
        """
        ans = [0]
        if n == 0:
            return ans

        for i in range(1,n+1):
            c = 1
            while i != 1:
                mod = i%2
                i = i // 2
                if mod == 1:
                    c +=1
            ans.append(c)
        return ans
        """
        sum = 0
        ans = []
        for i in range(n+1):
            sum = bin(i).count("1")
            ans.append(sum)
        return ans
    
            

        