class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        x = []
        a = (n*(n+1))//2
        for i in range(0,n):
            if nums[i] not in x:
                x.append(nums[i])
            else:
                t = []
                r = abs(sum(nums)-nums[i]-a)
                print(a)
                t.append(nums[i])
                t.append(r)
                return t
        