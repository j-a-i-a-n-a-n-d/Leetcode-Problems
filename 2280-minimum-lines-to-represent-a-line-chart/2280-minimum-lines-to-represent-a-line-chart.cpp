//class Solution {
//public:
//    long double SOTC(long double x1,long double y1,long double x2,long double y2)
//    {
//        if (y2==y1)return 0;
//        if (x2==x1)return FLT_MAX_EXP;
//        //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<(y2-y1)/(x2-x1)<<endl;
//        return (y2-y1)/(x2-x1);
//    }
//    int minimumLines(vector<vector<int>>& stockPrices)
//    {
//        int n = stockPrices.size();
//        if(n==1)return 0;
//        if(n==2)return 1;
//        sort(stockPrices.begin(),stockPrices.end());
//        int x1=stockPrices[0][0];
//        int y1=stockPrices[0][1];
//        int x2 = stockPrices[1][0];
//        int y2 = stockPrices[1][1];
//        long double slope = SOTC(x1,y1,x2,y2);
//        int numberOfLines=1;
//        
//        for(int i=2;i<n;i++)
//        {
//            x1=x2;
//            y1=y2;
//            x2=stockPrices[i][0];
//            y2=stockPrices[i][1];
//            long double slope2 = SOTC(x1,y1,x2,y2);
//            if (slope==slope2)
//            {
//                continue;
//            }
//            else
//            {
//                slope = slope2;
//                numberOfLines++;
//            }
//        }
//        return numberOfLines;
//        
//    }
//};
class Solution {
public:
    int minimumLines(vector<vector<int>>& stk) {
        sort(stk.begin(),stk.end());
        int n = stk.size();
        if(n==1)
            return 0;
        int cnt = 1;
        for(int i=2;i<n;i++){
            long x1 = stk[i][0],x2 = stk[i-1][0],x3 = stk[i-2][0];
            long y1 = stk[i][1],y2 = stk[i-1][1],y3 = stk[i-2][1];
            long diff1 = (y3-y2) * (x2-x1);
            long diff2 = (y2-y1) * (x3-x2);
            if(diff1 != diff2)
                cnt++;
        }
        
        return cnt;
    }
};