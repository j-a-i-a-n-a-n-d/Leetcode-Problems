class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t sol=NULL;
        for(int i=1;i<=32;i++)
        {
            int tmp = (n&1);
            sol=sol<<1;
            sol=(sol | tmp);
            n=n>>1;
        }
        return sol;
        
    }
};