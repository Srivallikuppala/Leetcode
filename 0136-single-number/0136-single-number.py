class Solution:
    def singleNumber(self, x: List[int]) -> int:
        for i in x:
            if x.count(i)==1:return i