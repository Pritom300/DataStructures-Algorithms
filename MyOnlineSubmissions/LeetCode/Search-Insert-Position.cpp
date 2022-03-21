class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i,n;
        int s=nums.size();
        
        for( i=0;i<s;i++)
        {
            if(nums[i]==target)
            {
                 n=i;
                break;
                
            }
            
           
               else if(nums[i]>target)
                {
                   n = i;
                   break;
                }
            else
            {
                n=i+1;
            }
            
           
            
        }
        
        return n;
        
    }
};
