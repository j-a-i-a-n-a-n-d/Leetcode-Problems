class Solution {
public:
    int minMoves(int target, int maxDoubles)
    {
        int cnt=0;
        while (target!=1)
        {
            cnt++;
            if (target%2==0 && maxDoubles)
            {
                target/=2;
                maxDoubles--;
            }
            else if (maxDoubles==0)
            {
                cnt=cnt+target-2;
                break;
            }
            else
                target--;
        }
        return cnt;
    }
};