class Solution {
public:
    int minOperations(string s)
    {
        char a='1';
        char b='0';
        int al=0;
        int bl=0;

        for(int i=s.length()-1;i>-1;i--)
        {
            if (s[i]==a)al+=0;
            else al+=1;
            a=a=='1'?'0':'1';
        }
        
        for(int i=s.length()-1;i>-1;i--)
        {
            if (s[i]==b)bl+=0;
            else bl+=1;
            b=b=='1'?'0':'1';
        }
        return min(al,bl);
    }
};