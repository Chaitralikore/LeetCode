class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        
        result = []
        
        #base case
        if(len(nums) == 1):    # IF THERE IS ONLY 1 P.C IT WILL RETURN THE SAME NO.
            return [nums[:]]          #coz o/p is in list within list
        
        for i in range(len(nums)):
            n = nums.pop(0)        #as we are popping one no and at first getting the P.C of two remaining no.'s
            
            perms = self.permute(nums)
            
            for per in perms:
                per.append(n)
            result.extend(perms)
            nums.append(n)
        
        return result