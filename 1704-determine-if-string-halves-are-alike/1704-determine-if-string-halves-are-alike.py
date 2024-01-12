class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        x = s[:len(s)//2]
        y = s[len(s)//2:]
        x1 = y1 = 0
        for i in range(len(x)):
            if x[i] in 'aeiouAEIOU':x1+=1
            if y[i] in 'aeiouAEIOU':y1+=1
        if x1==y1:return True
        else:return False
        