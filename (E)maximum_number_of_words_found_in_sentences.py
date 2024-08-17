class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        max_count = 0  
        for i in sentences:
            a = i.split()
            b = len(a)
            if b >= max_count:
                max_count = b
        return max_count
