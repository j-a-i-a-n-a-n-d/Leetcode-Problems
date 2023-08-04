class Solution {
public:
    int exactlyK(vector<int>& nums, int d) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int k = 0;
        unordered_map<int, int> mappy;
        int total = 0;
        while (r < n) {
            if (!mappy[nums[r]]++) {
                k++;
            }
            while(l<n && k>d){
                if (!--mappy[nums[l]])k--;
                l++;
           }
            total+=(r-l+1);
            cout<<"2 "<<total<<endl;
            r++;
        }
        return total;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return exactlyK(nums, k) - exactlyK(nums, k - 1);
    }
};

class Solution2 {
public:
int subarraysWithKDistinct(vector<int>& A, int K) {
        return atMostK(A, K) - atMostK(A, K - 1);
    }
    int atMostK(vector<int>& A, int K) {
        int i = 0, res = 0;
        unordered_map<int, int> count;
        for (int j = 0; j < A.size(); ++j) {
            if (!count[A[j]]++) K--;
            while (K < 0) {
                if (!--count[A[i]]) K++;
                i++;
            }
            cout<<"2 "<<res<<endl;
            res += j - i + 1;
        }
        return res;
    }
};