from collections import Counter
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        arr = Counter(arr)
        t = []
        for i in arr:
            t.append(arr[i])
        s = set(t)
        if len(s)==len(t):return True
        return False