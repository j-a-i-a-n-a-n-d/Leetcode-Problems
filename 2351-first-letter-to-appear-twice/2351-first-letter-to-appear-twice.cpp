class Solution {
public:
    char repeatedCharacter(string s) 
    {
        
    int cnt[26]{};
    for(char ch:s) if(++cnt[ch-'a']==2) return ch;
    return 0;
       // int a[26]{};
       //// memset(a,0,sizeof(a));
       // for(char i : s)
       // {
       //     if (a[i-'a']!=2)a[i-'a']++;
       //     else return i;
       // }
       // return 0;
    }
};
