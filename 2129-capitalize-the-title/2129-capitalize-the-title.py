class Solution:
    def capitalizeTitle(self, title: str) -> str:
        x2 = []
        x = title.split()
        l = len(x)
        for i in x :
            if (len(i)<=2) : 
                x2.append(i.lower())
            else :
                x2.append(i.capitalize())
        print(x)
        return " ".join(str(x1) for x1 in x2)