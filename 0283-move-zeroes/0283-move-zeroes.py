class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        
        
        # last_non_zero_found_at keeps track of the last non-zero index found in the array 
        last_non_zero_found_at = 0

        # Iterate over the array
        for current, value in enumerate(nums):
            
            # When a non-zero element is found
            if value != 0:
                
                # Swap the current non-zero element with the element at last_non_zero_found_at index
                nums[last_non_zero_found_at], nums[current] = nums[current], nums[last_non_zero_found_at]
                
                # Move the last_non_zero_found_at index forward
                last_non_zero_found_at += 1
