class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int maj1 = INT_MIN;
        int maj2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && maj2!=nums[i]){
                cnt1=1;
                maj1=nums[i];
            }
            else if(cnt2 ==0 && maj1!=nums[i])
            {
                cnt2=1;
                maj2=nums[i];
            }
            
            else if(maj1==nums[i])cnt1++;
            else if(maj2==nums[i])cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ls;
        int n = nums.size();
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maj1) cnt1++;
            if (nums[i] == maj2) cnt2++;
        }
        cout<<maj1<<" "<<cnt1<<endl;
        cout<<maj2<<" "<<cnt2<<endl;
        int mini = int(n / 3) + 1;
        if (cnt1 >= mini) ls.push_back(maj1);
        if (cnt2 >= mini) ls.push_back(maj2);
        return ls;
        }
    

};