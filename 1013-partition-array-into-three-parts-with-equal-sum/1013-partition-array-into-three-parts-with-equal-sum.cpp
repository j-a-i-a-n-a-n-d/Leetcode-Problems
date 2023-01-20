class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A)
    {
        int sum = 0;
        for (auto a : A)
            sum += a;
        if (sum % 3 != 0)
            return false;
        int each = sum/3, temp = 0, found = 0;
        for (int i=0; i<A.size(); i++)
        {
            temp += A[i];
            if (temp == each) 
            {
                temp = 0;
                found++;
            }
        }
        return found>=3? true : false;
    }
};