class Solution {
public:
    string orderlyQueue(string s, int k) 
    {
        if (k==1)
        {
            int m = s.size();
            s = s+s;
            string sol = s.substr(0,m);
            cout<<sol<<endl;
            for(int i=1;i<m;i++)
            {
                if (sol>s.substr(i,m))
                    sol=s.substr(i,m);
            }
            return sol;
        }
        else
        { 
            sort(s.begin(),s.end());
            return s;
        }
        
    }
};