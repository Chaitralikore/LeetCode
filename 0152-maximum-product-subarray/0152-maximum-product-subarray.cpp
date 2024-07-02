class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }

        __int128_t maxProd = nums[0];
        __int128_t minProd = nums[0];
        __int128_t result = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max((__int128_t)nums[i], maxProd * nums[i]);
            minProd = min((__int128_t)nums[i], minProd * nums[i]);

            result = max(result, maxProd);
        }

        return (int)result;
    }
};