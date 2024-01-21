class Solution:
    def minimumPushes(self, word: str) -> int:
        if len(word)<=8:return len(word)
        x = t = len(word)
        t = t-8
        while t>8:
            x+=t
            t = t-8
        x+=t
        return x
        