class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int c =1;
        for(int i=n-1;i>-1;i--)
        {
            digits[i]=digits[i]+c;
            c=digits[i]/10;
            digits[i]=digits[i]%10;
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};