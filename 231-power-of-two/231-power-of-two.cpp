class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int i=1;
        do
        {
            if (i==n)return true;
            i=i*2;
        }while(i<=n);
        return false;
    }
};