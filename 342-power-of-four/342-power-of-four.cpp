class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0) return false;
        long int i=1;
        do
        {
            if (i==n)return true;
            i=i*4;
        }while(i<=n);
        return false;
    }
};