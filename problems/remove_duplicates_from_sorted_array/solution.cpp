class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer = 1;
        if(nums.size()<1){
            return nums.size();
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[pointer++] = nums[i];
            }
        }
        return pointer;
    }
};