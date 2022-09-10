class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int n = arr.size();
        int temp = arr[n-1];
        for(int i=n-1;i>-1;i--)
        {
            int c = arr[i];
            arr[i]=temp;
            if (c>temp)temp=c;
        }
        arr[n-1]=-1;
        return arr;
    }
};