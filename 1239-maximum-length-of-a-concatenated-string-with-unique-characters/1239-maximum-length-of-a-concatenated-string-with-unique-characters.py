class Solution(object):
    def maxLength(self, arr):
        """
        :type arr: List[str]
        :rtype: int
        """
        x =[]
        a = pow(2,len(arr))
        for i in range(a):
            y = i
            j = 0
            r = ""
            while y:
                if y&1:
                    r+=arr[j]
                j+=1
                y = y>>1
            if len(r)==len(set(r)):x.append(len(r))
        return max(x)
                