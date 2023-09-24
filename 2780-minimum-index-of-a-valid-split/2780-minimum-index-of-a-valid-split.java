class Solution {
    public int minimumIndex(List<Integer> nums) 
    {
        int count = 1;
        int majorityElement = nums.get(0);
        int len = nums.size();
        for (int i=1;i<len;i++)
        {
            if (nums.get(i)==majorityElement)count++;
            else count--;
            
            if (count==0)
            {
                majorityElement=nums.get(i);
                count=1;
            }
        }
        // System.out.println(majorityElement);
        
        int actual_count = 0;
        for(int i=0;i<len;i++){
            if(nums.get(i)==majorityElement)actual_count++;
        }
        // System.out.println(actual_count);
        
        int count_at_some_point =0;
        for(int i=0;i<len;i++)
        {
            if(majorityElement==nums.get(i))count_at_some_point++;
            
            if((count_at_some_point*2 > i-0+1) &&
               ((actual_count-count_at_some_point)*2>len-i-1))return i;
            
            // System.out.println(count_at_some_point+" "+i);
        }
        
        return -1;
        
        
        
    }
}