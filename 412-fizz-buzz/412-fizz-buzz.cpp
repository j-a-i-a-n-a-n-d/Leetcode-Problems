class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> sol;
        for(int i=1;i<=n;i++)
        {
            if (i%15==0 && i >=15)
            {
                sol.push_back("FizzBuzz");
            }
            else if (i%5==0 && i>=5)
            {
                sol.push_back("Buzz");
            }
            else if (i%3==0 && i>=3)
            {
                sol.push_back("Fizz");
            }
            else {
                sol.push_back(to_string(i));
            }
        }
       // reverse(sol.begin(),sol.end());
        return sol;
    }
};