class Solution {
    public int[] sortedSquares(int[] nums) {
        int left = 0, n = nums.length, right = n - 1;
        int[] result = new int[n];
        int index = n - 1; // Initialize index here
        
        while (left <= right) { // Use 'left <= right' instead of '0 <= index'
            int leftNum = nums[left] * nums[left];
            int rightNum = nums[right] * nums[right];
            if (leftNum < rightNum) {
                result[index--] = rightNum;
                right--;
            } else {
                result[index--] = leftNum;
                left++; // Increment left index here
            }
        }
        return result;
    }
}
