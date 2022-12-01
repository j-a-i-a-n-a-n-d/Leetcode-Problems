class Solution(object):
    def halvesAreAlike(self, s):
        count1=count2=0
        j=i= (int)(len(s)/2)
        while(i<len(s)):
            if s[i] in "aeiouAEIOU":
                count1+=1
            if s[i-j] in "aeiouAEIOU" :
                count2+=1
            i+=1
        return count1==count2
        