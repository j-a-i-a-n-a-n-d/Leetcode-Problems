class Solution {
public:
    bool isSameAfterReversals(int n)
    {
        if (n!=0 && n%10==0)
            return false;
        return true;
    }
};