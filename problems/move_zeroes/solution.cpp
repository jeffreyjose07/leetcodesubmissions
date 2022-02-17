class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pointer = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                nums[pointer++]=nums[i];
        }
        for(int i = pointer; i<nums.size(); i++){
            nums[pointer++]=0;
        }
    }
};