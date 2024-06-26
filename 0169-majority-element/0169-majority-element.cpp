class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0;     //at start
        int el;          //select an ele
        
        for(int i=0;i<nums.size();i++){
            if(cnt == 0){      //if cnt is 0 assign another el and move
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el){    // if el from array is equal to selected el
                cnt++;
            }
            else{                   //if not then decrease by 1
                cnt--;
            }
        }
        
        // for verification whether it is actually > n/2
        
        int cnt1 = 0;  //initially
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el)       //select el got in ans and count it from start to end of array
                cnt1++;
        }
        
        if(cnt1 > (nums.size()/2)){
            return el;
        }
        
        // If no majority element found
        return -1;
    }
};
