class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        unordered_set<int> s;
        int allowedToEat = candyType.size()/2;
        for(int i=0;i<candyType.size();i++)
        {
            s.insert(candyType[i]);
        }
        int x;
        return x = allowedToEat<s.size()?allowedToEat:s.size();
        
    }
};