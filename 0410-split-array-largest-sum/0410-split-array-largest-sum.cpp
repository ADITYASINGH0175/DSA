class Solution {
public:
int CountSubarrays(vector<int>&nums, int mid)
     {  int sum =0;
       int count = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]>mid)
            {
                sum = nums[i];
                count++;
            }
            else
                sum+=nums[i];
        }
      
      return count;
         
     
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end()); // 8
        int high = accumulate(nums.begin(),nums.end(),0); // 23
        int ans = low;
        while(low<=high)
        {
            int mid = (low+high)/2; // limit
            int n =CountSubarrays(nums,mid);
            if(n>k)
              low = mid+1;
            else
            {
                ans = mid; //minimize ans
                high = mid-1;         
                
            }
          
                
        }
        
        return ans;
        
        
    }
    
     
};
