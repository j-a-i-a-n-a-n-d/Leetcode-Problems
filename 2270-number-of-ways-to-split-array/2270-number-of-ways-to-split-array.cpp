class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
     
        long long back=0ll,front=0ll;
        for (auto& i : nums)     back += i;
        
        int n(size(nums)), res(0);
        for (auto i=0; i<n-1; i++) {
            
            front += nums[i];
            back -= nums[i]; 
            if (front >= back)  res++;
        }
        return res;
    }
};


//space O(n)
//time O(n)
//#define ll long int 
//class Solution {
//public:
//    int waysToSplitArray(vector<int>& nums) 
//    {
//        int n = nums.size();
//        vector<ll> ps(n);
//        ps[0]=nums[0];
//        for(int i=1;i<n;i++)ps[i]=nums[i]+ps[i-1];
//        
//        int sol=0;
//        ll totalSum=ps[n-1];
//        for(int i =0;i<n-1;i++)
//        {
//            ll x = totalSum - ps[i];
//            if (ps[i]>=x)sol++;
//        }
//        return sol;
//    }
//};

//space O(2n)
//time O(n)
//#define ll long long
//class Solution {
//public:
//    int waysToSplitArray(vector<int>& nums) 
//    {
//        int n = nums.size();
//        vector<ll int>ps(nums.size());
//        vector<ll int>ss(nums.size());
//        
//        ps[0]=nums[0];
//        for(int i =1;i<n;i++)ps[i]=nums[i]+ps[i-1];
//        
//        ss[n-1]=nums[n-1];
//        for(int i=n-2;i>=0;i--)ss[i]=nums[i]+ss[i+1];
//        
//        for(int i =0;i<n;i++)cout<<ps[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<n;i++)cout<<ss[i]<<" ";
//        
//        int sol=0;
//        
//        for(int i=0;i<n-1;i++)if (ps[i]>=ss[i+1])sol++;
//        return sol;
//    }
//};//