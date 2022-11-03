class Solution {
public:
    int reverse(int x1) 
    {
        long long int x=x1;
        long long int rev=0;
        bool f = true;
        if (x<0){
            f=false;
            x=x*-1;
        }
        int rem=0;
        while (x>0)
        {
            rem=x%10;
            x=x/10;
            rev = rev*10 + rem; 
        }
        if (!f)rev = rev*-1;
        if (rev>INT_MAX || rev<INT_MIN)return 0;
        return rev;
        
    }
};