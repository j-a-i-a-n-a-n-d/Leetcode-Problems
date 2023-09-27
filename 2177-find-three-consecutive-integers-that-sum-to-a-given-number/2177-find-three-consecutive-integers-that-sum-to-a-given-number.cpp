class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        if (num%3!=0)return {};
        long long _num = num/3;
        return {_num-1,_num,_num+1};
    }
};