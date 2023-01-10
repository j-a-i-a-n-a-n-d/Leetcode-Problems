class Solution:
    def detectCapitalUse(self, str1: str) -> bool:
        if str1.isupper() : 
            return True
        if str1.islower() :
            return True
        c=0
        for i in str1[1:] :
            if i.isupper() :
                c+=1
        return True if c==0 else 0
            