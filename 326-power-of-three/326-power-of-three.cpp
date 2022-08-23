class Solution {
public:
    bool isPowerOfThree(int n) {
        long int i=1;
        do
        {
            if (i==n)return true;
            i=i*3;
        }while(i<=n);
        return false;
        
    }
};