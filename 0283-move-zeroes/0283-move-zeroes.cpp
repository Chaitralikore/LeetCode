class Solution {
public:
 
    void moveZeroes(vector<int>& nums) {
        
        int lastNonZeroFoundAt = -1;                    //j=lastNonZeroFoundAt
       
        int n = nums.size();
      
        for (int i = 0; i < n; i++) {
            
            if (nums[i] != 0) {
                
                swap(nums[++lastNonZeroFoundAt], nums[i]);
            }
        }
    }
};