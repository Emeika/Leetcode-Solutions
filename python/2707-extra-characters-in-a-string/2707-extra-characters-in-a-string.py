class Solution(object):
    def minExtraChar(self, s, dictionary):
        """
        :type s: str
        :type dictionary: List[str]
        :rtype: int
        """
        s_len = len(s)
        dp = [0] + [float('inf')] * s_len
        dictionary_set = set(dictionary)

        for i in range(1, s_len + 1):
            dp[i] = dp[i - 1] + 1

            for l in range(1, i + 1): 
                if s[i-l:i] in dictionary_set:
                    dp[i] = min(dp[i], dp[i-l])
                    
        return dp[-1]
"""
        s_len = len(s)
        extra_chars = 0
        i = 0

        while i < s_len:
            max_word = ""
            for word in dictionary:
                if s[i:i + len(word)] == word and len(word) > len(max_word):
                    max_word = word

            if max_word:
                i += len(max_word)
            else:
                extra_chars += 1
                i += 1

        return extra_chars

"""