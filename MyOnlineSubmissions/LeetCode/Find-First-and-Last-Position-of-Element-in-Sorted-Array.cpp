class Solution {
    
    int getFirst(vector<int>& nums, int target)
    {
        //now simple binary search approch
        int s=0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e)
        {
            int mid=  s+(e-s)/2;        //(s+e)/2;
            if(nums[mid]==target)
            {
               ans =mid;
               e=mid-1;  //LHS search for first position
            }
            
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    
        int getLast(vector<int>& nums, int target)
    {
        //now simple binary search approch
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e)
        {
            int mid=  s+(e-s)/2;
            if(nums[mid]==target)
            {
               ans = mid;
               s=mid+1;  //RHS for last position
            }
            
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v(2,-1);
        int first = getFirst(nums,target);
        if(first == -1)
        {
            return v;
            
        }
        
        int last=getLast(nums,target);
        
        v[0]=first;
        v[1]=last;
        
        return v;
        
    }
};
