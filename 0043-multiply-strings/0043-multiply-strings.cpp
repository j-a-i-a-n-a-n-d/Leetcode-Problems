class Solution {
public:
    string multiply(string num1, string num2)
    {
        if (num1=="0" || num2=="0")return "0";
        
        int m = num1.size();
        int n = num2.size();
        vector<int> sol(m+n,0);
        
        for(int i = m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                sol[i+j+1] = sol[i+j+1]+ (num1[i]-'0')*(num2[j]-'0'); //fill last
                sol[i+j]= sol[i+j] + sol[i+j+1]/10; //carry generate
                sol[i+j+1]= sol[i+j+1]%10; //mod for the last digit 
            }
        }
        int i =0;
        string soll = "";
        while(!sol[i])i++;
        
        while(i<m+n)soll.push_back(sol[i++]+48);
        
        return soll;
    }
};