class Solution:
    def minimumPushes(self, word: str) -> int:
        x = {}
        for i in word:
            if i not in x:
                x[i]=1
            else:x[i]+=1
        s = (dict(reversed(sorted(x.items(), key=lambda item: item[1]))))
        t , c = 1,1
        r = 0
        for i in (s):
            if t>8:
                c+=1
                t-=8
            r+=(c*s[i])
            t+=1
        return r
        