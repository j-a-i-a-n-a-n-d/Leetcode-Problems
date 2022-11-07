class Solution {
public:
    int maximum69Number (int num)
    {
        string s = to_string(num);
        int n = s.size();
        int i =0;
        for(i =0; i <n;i++)
        {
            if (s[i]=='6')
                break;
        }
        if (i!=n)
            return stoi(s.substr(0,i)+'9'+s.substr(i+1,n));
        return num;
    }
};