class Solution {
public:
    int minOperations(int n) 
    {
        int mean = (2 * (n/2))+1;
        if (n%2==0)
            mean = mean-1;
        cout<<n<<" "<<mean<<endl;
        int steps=0;
        for (int i =1;i<mean;i+=2)
        {
            steps+=(mean-i);
        }
        return steps;
    }
};