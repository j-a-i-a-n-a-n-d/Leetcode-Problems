class Solution {
public:
    int trap(vector<int>& height)
    {
        int prefix[height.size()];
        int p=height[0];
        for(int i =0;i<height.size();i++)
        {
            if (height[i]>p)
                p=height[i];
            prefix[i]=p;
        }
        
        
        int suffix[height.size()];
        int s=height[height.size()-1];
        for(int i=height.size()-1;i>=0;i--)
        {
            if (height[i]>s)
                s=height[i];
            suffix[i]=s;
        } 
        int answer=0;
        for(int i=0;i<height.size();i++)
        {
            answer+=min(prefix[i],suffix[i])-height[i];
        }
        
        
        
        
        
        for(int i=0;i<height.size();i++)
            cout<<prefix[i]<<" ";
        cout<<endl;
        for(int i=0;i<height.size();i++)
            cout<<suffix[i]<<" ";
        return answer;
    }
};