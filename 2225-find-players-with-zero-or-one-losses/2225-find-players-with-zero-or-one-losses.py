class Solution:
    def findWinners(self, m: List[List[int]]) -> List[List[int]]:
        w={}
        l={}
        for i in m:
            if i[0] in w:
                w[i[0]]+=1
            else:
                w[i[0]]=1
            if i[1] in l:
                l[i[1]]+=1
            else:
                l[i[1]]=1
        a1=[]
        a2=[]
        for i in w:
            if i not in l.keys():
                a1.append(i)
        for i in l:
            if l[i]==1:
                a2.append(i)
        a1=sorted(a1)
        a2=sorted(a2)
        return a1,a2