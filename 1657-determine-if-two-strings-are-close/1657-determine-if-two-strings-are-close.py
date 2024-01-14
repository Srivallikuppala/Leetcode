from collections import Counter
class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        word1=sorted(word1)      
        word2=sorted(word2)
        r = []
        z = []
        if len(word1)!=len(word2):return False
        if word1==word2:return True
        else:
            x = Counter(word1)
            y = Counter(word2)
            for i in x:
                if i not in y:
                    return False
                else:
                    r.append(x[i])
                    z.append(y[i])
        r.sort()
        z.sort()
        if r==z:return True
        else:return False
                