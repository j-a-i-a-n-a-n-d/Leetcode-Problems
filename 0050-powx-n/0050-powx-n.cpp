class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans = 1.0;
        long long nn = (n<0)?(-1 * long(n)):n;
        while(nn>0)
        {
            if(nn%2==1){
                ans = ans*x;
                nn--;
            }
            else{
                x=x*x; //binary exponentiation
                nn=nn/2;
            }
        }
        if (n<0) ans = 1.0/ans;
        return ans;
    }
};